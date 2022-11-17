/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:51:12 by araji-af          #+#    #+#             */
/*   Updated: 2022/11/15 17:41:06 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	is_format(char half_form);
int	printf_helper(va_list args, char format_speci);
int	ft_printf(const char *format, ...);
int	hexa_lower(unsigned int nbr);
int	hexa_upper(unsigned int nbr);
int	unsigned_forme(unsigned int nbr);
int	print_pointer(uintptr_t n);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(const char *str);

#endif