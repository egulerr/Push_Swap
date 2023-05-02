/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:22:30 by eguler            #+#    #+#             */
/*   Updated: 2022/06/06 13:22:29 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	findindex(t_list *main, int tofind)
{
	int	i;

	i = 0;
	while (i < main->keep)
	{
		if (main->sorted[i] == tofind)
			break ;
		i++;
	}
	return (i);
}

int	max_bit(t_list *main)
{
	int	i;
	int	x;

	x = main->alen - 1;
	i = 0;
	while (x)
	{
		x >>= 1;
		i++;
	}
	return (i);
}

void	radix_sort(t_list *main)
{
	int	i;
	int	j;
	int	x;
	int	maxbit;

	maxbit = max_bit(main);
	i = 0;
	while (i < maxbit)
	{
		j = 0;
		while (j < main->keep)
		{
			x = findindex(main, main->stacka[0]);
			if (x >> i & 1)
				ra(main);
			else
				pb(main);
			j++;
		}
		while (main->blen)
			pa(main);
		i++;
	}
}

void	three_sort(t_list *main)
{
	if ((main->stacka[2] > main->stacka[0]) \
	&& (main->stacka[1] < main->stacka[0]))
		sa(main);
	else if ((main->stacka[0] > main->stacka[1]) \
	&& (main->stacka[0] > main->stacka[2]) \
	&& (main->stacka[1] < main->stacka[2]))
		ra(main);
	else if ((main->stacka[1] > main->stacka[0]) \
	&& (main->stacka[1] > main->stacka[2]) \
	&& (main->stacka[2] < main->stacka[0]))
		rra(main);
	else if ((main->stacka[0] > main->stacka[1]) \
	&& (main->stacka[0] > main->stacka[2]) \
	&& (main->stacka[2] < main->stacka[1]))
	{
		sa(main);
		rra(main);
	}
	else if ((main->stacka[1] > main->stacka[0]) \
	&& (main->stacka[1] > main->stacka[2]) \
	&& (main->stacka[0] < main->stacka[2]))
	{
		rra(main);
		sa(main);
	}
}

void	five_sort(t_list *main)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		while (main->sorted[2] <= main->stacka[0])
			ra(main);
		if (main->sorted[2] > main->stacka[0])
			pb(main);
		i++;
	}
	three_sort(main);
	if (main->stackb[0] < main->stackb[1])
		sb(main);
	i = 0;
	while (i < 2)
	{
		pa(main);
		i++;
	}	
}
