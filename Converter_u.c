/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:53:32 by jbuan             #+#    #+#             */
/*   Updated: 2021/08/25 12:04:09 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	Converter_u(va_list ap, t_list *s_list)
{
	unsigned int	u;

	u = 0;
	u = va_arg(ap, unsigned int);
	ft_putunsignednbr(u, s_list);
}
