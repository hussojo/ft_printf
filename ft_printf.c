/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:00:17 by jhusso            #+#    #+#             */
/*   Updated: 2022/12/07 16:57:57 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int ft_printf(int num, ...) //check!!
{
	va_list args;
	int i;
	int value;

	va_start (args, num);
	i = 0;
	value = 0;
	while (i++ < num)
	{
		value = va_arg(args, int);
		printf("%d: %d\n", i, value);
	}
	va_end(args);
	return(0);
}

int main(void)
{
	ft_printf(2, 3, 4);
	ft_printf(5, 6, 6, 6, 6, 6);
	return(0);
}
