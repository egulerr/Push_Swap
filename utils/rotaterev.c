/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotaterev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:13:46 by eguler            #+#    #+#             */
/*   Updated: 2022/06/05 21:53:18 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list *main)
{
	int	temp;

	temp = main->stacka[main->alen - 1];
	main->stacka = swipe_down(main->stacka, main->alen);
	main->stacka[0] = temp;
	ft_printf("rra\n");
}

void	rrb(t_list *main)
{
	int	temp;

	temp = main->stackb[main->blen - 1];
	main->stackb = swipe_down(main->stackb, main->blen);
	main->stackb[0] = temp;
	ft_printf("rrb\n");
}

void	rrr(t_list *main)
{
	int	temp;

	temp = main->stacka[main->alen - 1];
	main->stacka = swipe_down(main->stacka, main->alen);
	main->stacka[0] = temp;
	temp = main->stackb[main->blen - 1];
	main->stackb = swipe_down(main->stackb, main->blen);
	main->stackb[0] = temp;
	ft_printf("rrr\n");
}
