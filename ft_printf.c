/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-la-p <bde-la-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:03:11 by bde-la-p          #+#    #+#             */
/*   Updated: 2025/05/15 12:54:48 by bde-la-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (specifier == 'p')
		count += ft_putptr(va_arg(ap, void *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (specifier == 'u')
		count += ft_putnbr_unsigned(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		count += ft_putnbr_hex_min(va_arg(ap, unsigned int));
	else if (specifier == 'X')
		count += ft_putnbr_hex_maj(va_arg(ap, unsigned int));
	else if (specifier == '%')
		count += write(1, "%", 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	if (!format)
		return (-1);
	va_start(ap, format);
	i = 0;
	count = 0;
	while (format && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			count = count + handle_format(format[i + 1], ap);
			i = i + 2;
		}
		else
		{
			count = count + ft_putchar(format[i]);
			i++;
		}
	}
	va_end(ap);
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	int	val;
	int	val2;

	val = printf(NULL);
	printf("Val : %d", val);
	val2 = ft_printf(NULL);
	ft_printf("Val2 : %d", val2);
}*/
