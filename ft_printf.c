/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:00:17 by jhusso            #+#    #+#             */
/*   Updated: 2022/12/13 15:37:50 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int check_specifier(va_list argp, const char format)
{
	int ret;

	ret = 0;
	if (format == 'c')
		ret += ft_putchar_printf(va_arg(argp, int));
	if (format == 's')
		ret += ft_putstr_printf(va_arg(argp, char *));
	// if (format == 'p')
	// 	ret += ft_putstr_printf(va_arg(argp, int *)); // make a function

	if (format == 'd' || format == 'i')
		ret += ft_putnbr_printf(va_arg(argp, int));
	// if (*format == 'u')
	// if (*format == 'x')
	// if (*format == 'X')
	// if (*format == '%')
return(ret);
}


int ft_printf(const char *format, ...)
{
	va_list argp; //pointer to the argument list
	int i;
	int ret;

//setting a pointer to the call stack where our
//variables are stored when function is called
	va_start (argp, format); //arguments: va_list and the required argument
	i = 0;
	ret = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			ret = check_specifier(argp, format[i+1]);
			i = i+2; // for not to print the specigier
		}
		else
		{
			ret += ft_putchar_printf(format[i]);
			i++;
		}
	}
	va_end(argp);
	return(i);
}

int main(void)
{
	// int x = 10;
	// int *ptr = &x;
	ft_printf("Test: %d test\n", 1700000);
	// printf("\n");
	printf("Test: %d", 2700000);
	return(0);
}
