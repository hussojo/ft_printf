/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:00:17 by jhusso            #+#    #+#             */
/*   Updated: 2022/12/11 14:41:39 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void *check_specifier(va_list argp, const char *format)
{
	void *output;

	if (*format == 'c')
		output = ft_putchar_printf(va_arg(argp, int));
	if (*format == 's')
		output = ft_putstr_printf(va_arg(argp, int));
	if (*format == 'p')
		output = ft_puthex_printf(va_arg(argp, unsigned char));

	// if (*format == 'd')
	// if (*format == 'i')
	// if (*format == 'u')
	// if (*format == 'x')
	// if (*format == 'X')
	// if (*format == '%')
return(/* variable */);
}


int ft_printf(const char *format, ...)
{
	va_list argp; //pointer to the argument list
	int i;

//setting a pointer to the call stack where our
//variables are stored when function is called
	va_start (argp, format); //arguments: va_list and the required argument
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			check_specifier(argp, &format[i+1]);
			break;
		}
		ft_putchar_printf(format[i]);
		i++;
	}
	// returns the number of
	// characters printed (excluding the null byte
	// used to end output to strings)
	va_end(argp);
	return(i);
}

int main(void)
{
	ft_printf("Test: %c", 'd');
	printf("Test: %c", 'e');
	return(0);
}
