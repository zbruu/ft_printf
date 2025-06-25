/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-la-p <bde-la-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:27:28 by bde-la-p          #+#    #+#             */
/*   Updated: 2025/05/07 16:25:11 by bde-la-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		return (ft_putchar('0'));
	}
	if (n > 9)
		i += ft_putnbr_unsigned(n / 10);
	i += ft_putchar(n % 10 + '0');
	return (i);
}
