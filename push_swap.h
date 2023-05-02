/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 21:12:15 by eguler            #+#    #+#             */
/*   Updated: 2022/06/13 12:04:30 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include "./utils/ft_printf/ft_printf.h"

typedef struct s_list
{
	int		*stacka;
	int		*stackb;
	int		*sorted;
	char	**split;
	int		keep;
	int		alen;
	int		blen;
}	t_list;

int		ft_atoi(const char *str, t_list *main);
char	**ft_split(char const *s, char c);
void	check(t_list *main, int ac, char **av);
void	ft_exit(t_list *main, int flag);
void	sa(t_list *main);
void	sb(t_list *main);
void	ss(t_list *main);
void	pb(t_list *main);
void	pa(t_list *main);
void	ra(t_list *main);
void	rb(t_list *main);
void	rra(t_list *main);
void	rrb(t_list *main);
int		*swipe_down(int *arr, int l);
int		is_digit(char **arr, t_list *main);
void	swipe_up(int *stack, int len);
void	radix_sort(t_list *main);
void	three_sort(t_list *main);
void	five_sort(t_list *main);
void	bubblesort(t_list *main);
void	create(t_list *main, int ac, char **av);
int		ft_printf(const char *args, ...);
void	setup(t_list *main);

#endif