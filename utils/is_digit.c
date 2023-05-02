/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:48:32 by eguler            #+#    #+#             */
/*   Updated: 2022/06/13 15:38:04 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	isdigit2(char *arr, t_list *main)
{
	int		i;

	ft_atoi(arr, main);
	i = 0;
	while (arr[i])
	{
		if ((arr[i] > '9' && arr[i] < '0'))
		{
			if (arr[i] == '-' || arr[i] == '+')
			{
				i++;
				if (arr[i] == '-' || arr[i] == '+')
					return (0);
			}
		}
		else
			i++;
	}
	return (1);
}

int	is_digit(char **arr, t_list *main)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (arr[i])
	{
		j = 0;
		if (isdigit2(arr[i], main) == 0)
			ft_exit(main, 2);
		i++;
	}
	return (1);
}
