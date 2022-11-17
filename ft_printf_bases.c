/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bases.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 23:07:42 by araji-af          #+#    #+#             */
/*   Updated: 2022/11/15 16:25:25 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexa_lower(unsigned int nbr)
{
	int			count;
	const char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (nbr < 16)
		count += ft_putchar(base[nbr]);
	else
	{
		count += hexa_lower(nbr / 16);
		count += hexa_lower(nbr % 16);
	}
	return (count);
}

int	unsigned_forme(unsigned int nbr)
{
	int			count;

	count = 0;
	if (nbr < 10)
		count += ft_putchar(nbr + '0');
	else
	{
		count += unsigned_forme(nbr / 10);
		count += unsigned_forme(nbr % 10);
	}
	return (count);
}

int	hexa_upper(unsigned int nbr)
{
	int			count;
	char		*base;

	count = 0;
	base = "0123456789ABCDEF";
	if (nbr < 16)
		count += ft_putchar(base[nbr]);
	else
	{
		count += hexa_upper(nbr / 16);
		count += hexa_upper(nbr % 16);
	}
	return (count);
}

int	print_pointer(uintptr_t n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n < 16)
		count += ft_putchar(base[n]);
	else
	{
		count += print_pointer(n / 16);
		count += print_pointer(n % 16);
	}
	return (count);
}
