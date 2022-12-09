/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:00:17 by jhusso            #+#    #+#             */
/*   Updated: 2022/12/09 11:04:22 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void *check_specifier(va_list argp, const char *format)
{
	//char c = (char)argp;
	// while (*format)
	// {
		if (*format == 'c')
		{
		ft_putchar_fd(va_arg(argp, int), 1);
		// ft_putchar_fd(c, 1);
		ft_putchar_fd('\n', 1);
		// printf("here\n");s
		}
	// }
//printf("here too\n");
return(argp);
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
		ft_putchar_fd(format[i], 1);
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
