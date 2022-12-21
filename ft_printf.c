/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:00:17 by jhusso            #+#    #+#             */
/*   Updated: 2022/12/21 14:30:25 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_specifier(va_list argp, const char format)
{
	int	ret;

	ret = 0;
	if (format == 'c')
		ret += ft_putchar_printf(va_arg(argp, int));
	else if (format == 's')
		ret += ft_putstr_printf(va_arg(argp, char *));
	else if (format == 'd' || format == 'i')
		ret += ft_putnbr_printf(va_arg(argp, int ));
	else if (format == 'x' || format == 'X')
		ret += ft_puthex_printf(va_arg(argp, unsigned int), format);
	if (format == 'p')
		ret += ft_putptr_printf(va_arg(argp, void *));
	if (format == 'u')
		ret += ft_putu_printf(va_arg(argp, unsigned int));
	if (format == '%')
		ret += ft_putpercent_printf();
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	va_list	argp;
	int		i;
	int		ret;

	va_start (argp, format);
	i = 0;
	ret = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			ret += check_specifier(argp, format[i + 1]);
			i = i + 2;
		}
		else
		{
			ret += ft_putchar_printf(format[i]);
			i++;
		}
	}
	va_end(argp);
	return (ret);
}
