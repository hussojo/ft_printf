/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:07:04 by jhusso            #+#    #+#             */
/*   Updated: 2022/12/15 13:29:02 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_printf(unsigned int *ptr)
{
	int i;

	i = 0;
	while (&ptr[i])
	{
		ft_putchar_printf(ptr[i]);
		i++;
	}
return (i);
}

/* int	ft_puthex_printf(unsigned int c)
{
	int rem;
	char *res;
	int i;

	i = 0;
	while (c != 0)
	{
		rem = c % 16;
		if (rem <10)
			rem = rem + 48;
		else
			rem = rem + 55;
		res[i++] = rem;
		c = c / 16;
	}
	while (i >= 0)
		ft_putnbr_printf(res[i--]);
return (i);
} */

