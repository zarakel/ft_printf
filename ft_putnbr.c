/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:54:36 by jbuan             #+#    #+#             */
/*   Updated: 2021/08/25 11:54:39 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, t_list *s_list)
{
	long int	a;

	a = n;
	if (a < 0)
	{
		ft_putchar('-', s_list);
		a = -a;
	}
	if (a > 9)
	{
		ft_putnbr(a / 10, s_list);
		ft_putnbr(a % 10, s_list);
	}
	else
		ft_putchar(a + '0', s_list);
}
