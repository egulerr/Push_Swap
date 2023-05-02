/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:54:45 by eguler            #+#    #+#             */
/*   Updated: 2022/06/05 21:53:14 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list *main)
{
	int	temp;

	temp = main->stacka[0];
	swipe_up(main->stacka, main->alen);
	main->stacka[main->alen - 1] = temp;
	ft_printf("ra\n");
}

void	rb(t_list *main)
{
	int	temp;

	temp = main->stackb[0];
	swipe_up(main->stackb, main->blen);
	main->stackb[main->alen - 1] = temp;
	ft_printf("rb\n");
}

void	rr(t_list *main)
{
	int	temp;

	temp = main->stacka[0];
	swipe_up(main->stacka, main->alen);
	main->stacka[main->alen - 1] = temp;
	temp = main->stackb[0];
	swipe_up(main->stackb, main->blen);
	main->stackb[main->blen - 1] = temp;
	ft_printf("rr\n");
}
