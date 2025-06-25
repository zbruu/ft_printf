/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-la-p <bde-la-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:12:35 by bde-la-p          #+#    #+#             */
/*   Updated: 2025/05/14 11:49:20 by bde-la-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_hex_ulong(unsigned long nbr)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
		i += ft_putnbr_hex_ulong(nbr / 16);
	i += ft_putchar(base[nbr % 16]);
	return (i);
}

int	ft_putptr(void *ptr)
{
	int				i;
	unsigned long	address;

	i = 0;
	address = (unsigned long)ptr;
	if (ptr == NULL)
		i += ft_putstr("(nil)");
	else
	{
		i += ft_putstr("0x");
		i += ft_putnbr_hex_ulong(address);
	}
	return (i);
}
