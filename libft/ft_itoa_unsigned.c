/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:01:24 by jhusso            #+#    #+#             */
/*   Updated: 2022/12/19 16:25:26 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	i_len_unsigned(long nb)
{
	int		len;

	len = 0;
	if (nb == 0)
		len = 1;
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

void	count_nb_unsigned(char *str, long *nb, int *len)
{
		str[*len - 1] = '0' + (*nb % 10);
		*nb = *nb / 10;
		(*len)--;
}

char	*ft_itoa_unsigned(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	if (n == 0)
		len = 1;
	else
		len = i_len_unsigned(nb);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
		count_nb_unsigned(str, &nb, &len);
	return (str);
}
