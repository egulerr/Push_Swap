/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:20:35 by eguler            #+#    #+#             */
/*   Updated: 2022/06/05 21:53:22 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list *main)
{
	int	temp;

	temp = main->stacka[0];
	main->stacka[0] = main->stacka[1];
	main->stacka[1] = temp;
	ft_printf("sa\n");
}

void	sb(t_list *main)
{
	int	temp;

	temp = main->stackb[0];
	main->stackb[0] = main->stackb[1];
	main->stackb[1] = temp;
	ft_printf("sb\n");
}

void	ss(t_list *main)
{
	int	temp;

	temp = main->stacka[0];
	main->stacka[0] = main->stacka[1];
	main->stacka[1] = temp;
	temp = main->stackb[0];
	main->stackb[0] = main->stackb[1];
	main->stackb[1] = temp;
	ft_printf("ss\n");
}
