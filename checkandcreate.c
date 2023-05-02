/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkandcreate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:19:03 by eguler            #+#    #+#             */
/*   Updated: 2022/06/13 12:13:31 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isdouble(t_list	*main)
{
	int	i;
	int	j;

	i = 0;
	while (i < main->alen)
	{
		j = 0;
		while (j < main->alen)
		{
			if (main->stacka[i] == main->stacka[j] && j != i)
				ft_exit(main, 1);
			j++;
		}
		i++;
	}
	return (1);
}

int	issorted(t_list *main)
{
	int	i;

	i = 0;
	while (i < main->alen)
	{
		if (i + 1 < main->alen && main->stacka[i] > main->stacka[i + 1])
			return (1);
		i++;
	}
	ft_exit(main, 0);
	return (0);
}

void	bubblesort(t_list *main)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < main->alen)
	{
		j = 0;
		while (j < main->alen)
		{
			if (main->sorted[i] < main->sorted[j])
			{
				temp = main->sorted[i];
				main->sorted[i] = main->sorted[j];
				main->sorted[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	create(t_list *main, int ac, char **av)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	k = 0;
	while (i < ac)
	{
		main->split = ft_split(av[i], ' ');
		j = 0;
		while (main->split[j])
		{
			main->sorted[k] = ft_atoi(main->split[j], main);
			main->stacka[k] = main->sorted[k];
			free(main->split[j]);
			j++;
			k++;
		}
		if (main->split)
			free(main->split);
		i++;
	}
	isdouble(main);
	issorted(main);
	bubblesort(main);
}

void	check(t_list *main, int ac, char **av)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = 1;
	while (i < ac)
	{
		main->split = ft_split(av[i], ' ');
		if (is_digit(main->split, main) == 0)
			ft_exit(main, 2);
		j = 0;
		while (main->split[j] != NULL)
		{
			free(main->split[j]);
			len++;
			j++;
		}
		if (main->split)
			free(main->split);
		i++;
	}
	main->alen = len;
	main->keep = len;
}
