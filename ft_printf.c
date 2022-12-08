/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:00:17 by jhusso            #+#    #+#             */
/*   Updated: 2022/12/08 11:57:19 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

static int	i_len(long nb)
{
	int		len;

	len = 0;
	if (nb == 0)
		len = 1;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

void	set_nb(char *str, long *nb)
{
		str[0] = '-';
		*nb = *nb * -1;
}

void	count_nb(char *str, long *nb, int *len)
{
		str[*len - 1] = '0' + (*nb % 10);
		*nb = *nb / 10;
		(*len)--;
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;
	long	nb;

	len = i_len(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	nb = (long)n;
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
		set_nb(str, &nb);
	i = len;
	while (nb > 0)
		count_nb(str, &nb, &len);
	str[i] = '\0';
	return (str);
}

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
	//ft_printf(2, 3, 4);
	ft_printf("Test: %c", 'A');
	printf("Test: %c", 'B');
	return(0);
}
