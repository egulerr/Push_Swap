/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:27:47 by eguler            #+#    #+#             */
/*   Updated: 2022/06/11 15:40:40 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	nbrlen(long nbr)
{
	int	i;

	i = 1;
	if (nbr < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(int nbr)
{
	char	a;
	long	nbr2;
	int		len;

	nbr2 = nbr;
	len = nbrlen(nbr2);
	if (nbr2 < 0)
	{
		nbr2 *= -1;
		write(1, "-", 1);
	}
	if (nbr2 <= 9 && nbr2 >= 0)
	{
		a = nbr2 + 48;
		write(1, &a, 1);
		return (len);
	}
	else
		ft_putnbr(nbr2 / 10);
	ft_putnbr(nbr2 % 10);
	return (len);
}

int	ft_putunsigned(unsigned int nbr)
{
	char	a;
	int		len;

	len = nbrlen(nbr);
	if (nbr <= 9 && nbr >= 0)
	{
		a = nbr + 48;
		write(1, &a, 1);
		return (len);
	}
	else
		ft_putunsigned(nbr / 10);
	ft_putunsigned(nbr % 10);
	return (len);
}
