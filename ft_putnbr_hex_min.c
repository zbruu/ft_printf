/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_min.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-la-p <bde-la-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:02:09 by bde-la-p          #+#    #+#             */
/*   Updated: 2025/05/14 16:30:56 by bde-la-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex_min(unsigned int nbr)
{
	int				i;
	unsigned int	base_len;
	char			*base;

	i = 0;
	base = "0123456789abcdef";
	base_len = 16;
	if (nbr >= base_len)
		i += ft_putnbr_hex_min(nbr / base_len);
	i += ft_putchar(base[nbr % base_len]);
	return (i);
}
/*
int	main(void)
{
	int	nb;

	nb = 16;
	printf("%x", ft_putnbr_hex_min(16));
}*/
