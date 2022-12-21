/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 10:29:37 by jhusso            #+#    #+#             */
/*   Updated: 2022/12/21 12:28:35 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		check_specifier(va_list argp, const char format);
int		ft_putptr_printf(void *ptr);
int		ft_putu_printf(unsigned int n);
int		ft_putpercent_printf();

#endif
