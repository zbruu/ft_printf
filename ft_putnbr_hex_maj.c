/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_maj.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-la-p <bde-la-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:41:01 by bde-la-p          #+#    #+#             */
/*   Updated: 2025/05/15 12:29:09 by bde-la-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex_maj(unsigned int nbr)
{
	int				i;
	unsigned int	base_len;
	char			*base;

	i = 0;
	base_len = 16;
	base = "0123456789ABCDEF";
	if (nbr >= base_len)
		i += ft_putnbr_hex_maj(nbr / base_len);
	i += ft_putchar(base[nbr % 16]);
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%X", ft_putnbr_hex_maj(0));
}*/
