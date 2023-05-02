/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:54:52 by eguler            #+#    #+#             */
/*   Updated: 2022/06/05 21:53:09 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*swipe_down(int *arr, int l)
{
	int	i;
	int	temp;
	int	*stack;

	i = 1;
	stack = malloc(sizeof(int) * l + 1);
	stack[0] = 0;
	temp = arr[l - 1];
	while (i < l)
	{
		stack[i] = arr[i - 1];
		i++;
	}
	stack[i] = temp;
	free(arr);
	return (stack);
}

void	swipe_up(int *stack, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		stack[i] = stack[i + 1];
		i++;
	}
}

void	pb(t_list *main)
{
	main->blen++;
	main->stackb = swipe_down(main->stackb, main->blen);
	main->stackb[0] = main->stacka[0];
	main->alen--;
	swipe_up(main->stacka, main->alen);
	ft_printf("pb\n");
}

void	pa(t_list *main)
{
	main->alen++;
	main->stacka = swipe_down(main->stacka, main->alen);
	main->stacka[0] = main->stackb[0];
	main->blen--;
	swipe_up(main->stackb, main->blen);
	ft_printf("pa\n");
}
