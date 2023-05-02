/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:25:18 by eguler            #+#    #+#             */
/*   Updated: 2022/06/11 15:40:41 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	formats(va_list ap, const char args)
{
	int	printlen;

	printlen = 0;
	if (args == '%')
		printlen += ft_putchar('%');
	else if (args == 'c')
		printlen += ft_putchar(va_arg(ap, int));
	else if (args == 's')
		printlen += ft_putstr(va_arg(ap, char *));
	else if (args == 'd' || args == 'i')
		printlen += ft_putnbr(va_arg(ap, int));
	else if (args == 'u')
		printlen += ft_putunsigned(va_arg(ap, unsigned int));
	else if (args == 'x' || args == 'X')
		printlen += ft_putnbr_x(va_arg(ap, unsigned int), args);
	else if (args == 'p')
		printlen += ft_pointer(va_arg(ap, unsigned long long));
	return (printlen);
}

int	ft_printf(const char *args, ...)
{
	va_list	ap;
	int		i;
	int		printlen;

	i = 0;
	printlen = 0;
	va_start(ap, args);
	while (args[i])
	{
		if (args[i] == '%')
		{
			i++;
			if (args[i] == '\0')
				return (0);
			printlen += formats(ap, args[i]);
		}
		else
		{
			printlen += ft_putchar(args[i]);
		}
		i++;
	}
	va_end(ap);
	return (printlen);
}
