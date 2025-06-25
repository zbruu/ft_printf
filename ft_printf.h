/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-la-p <bde-la-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:47:42 by bde-la-p          #+#    #+#             */
/*   Updated: 2025/05/07 17:26:10 by bde-la-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int					ft_printf(const char *format, ...);

/*Functions needed to handle format*/

int					ft_putchar(char c);
int					ft_putstr(char *s);
int					ft_putnbr(int n);
int					ft_putnbr_unsigned(unsigned int n);
int					ft_putnbr_hex_min(unsigned int nbr);
int					ft_putnbr_hex_maj(unsigned int nbr);
int					ft_putptr(void *ptr);

#endif
