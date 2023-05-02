/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:24:39 by eguler            #+#    #+#             */
/*   Updated: 2022/06/11 15:40:39 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexlen(unsigned int nbr)
{
	int	i;

	i = 1;
	while (nbr >= 16)
	{
		nbr /= 16;
		i++;
	}
	return (i);
}

int	ft_putnbr_x(unsigned int nbr, char base)
{
	if (base == 'x')
	{
		if (nbr >= 16)
			ft_putnbr_x(nbr / 16, base);
		write(1, &"0123456789abcdef"[nbr % 16], 1);
	}
	else if (base == 'X')
	{
		if (nbr >= 16)
			ft_putnbr_x(nbr / 16, base);
		write(1, &"0123456789ABCDEF"[nbr % 16], 1);
	}
	return (hexlen(nbr));
}

int	ft_pointer(unsigned long long ptr)
{
	int		i;
	int		len;
	char	str[16];

	i = 0;
	len = 0;
	if (ptr == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	write(1, "0x", 2);
	while (ptr)
	{
		str[i] = "0123456789abcdef"[ptr % 16];
		i++;
		ptr /= 16;
	}
	while (i--)
		len += write(1, &str[i], 1);
	return (len + 2);
}
