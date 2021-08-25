/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter_Xx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:52:40 by jbuan             #+#    #+#             */
/*   Updated: 2021/08/25 12:00:46 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	Converter_Xx(va_list ap, t_list *s_list)
{
	unsigned int	u;

	u = 0;
	u = va_arg(ap, unsigned int);
	ft_putnbr_base16_maj(u, s_list);
}
