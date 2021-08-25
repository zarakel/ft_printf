/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:53:47 by jbuan             #+#    #+#             */
/*   Updated: 2021/08/25 12:06:31 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	Converters(char c, va_list ap, t_list *s_list)
{
	if (c == 'c')
		Converter_c(ap, s_list);
	if (c == 's')
		Converter_s(ap, s_list);
	if (c == 'd' || c == 'i')
		Converter_di(ap, s_list);
	if (c == 'u')
		Converter_u(ap, s_list);
	if (c == 'x')
		Converter_x(ap, s_list);
	if (c == 'X')
		Converter_Xx(ap, s_list);
	if (c == 'p')
		Converter_p(ap, s_list);
	if (c == '%')
		ft_putchar('%', s_list);
}
