/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:53:16 by jbuan             #+#    #+#             */
/*   Updated: 2021/08/25 12:02:23 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	Converter_p(va_list ap, t_list *s_list)
{
	unsigned long long	ull;

	ull = 0;
	ull = va_arg(ap, unsigned long long);
	ft_putchar('0', s_list);
	ft_putchar('x', s_list);
	ft_putnbr_base16_mini_long(ull, s_list);
}
