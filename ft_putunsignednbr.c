/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:56:39 by jbuan             #+#    #+#             */
/*   Updated: 2021/08/25 11:56:42 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsignednbr(unsigned int n, t_list *s_list)
{
	long int	a;

	a = n;
	if (a > 9)
	{
		ft_putnbr(a / 10, s_list);
		ft_putnbr(a % 10, s_list);
	}
	else
		ft_putchar(a + '0', s_list);
}
