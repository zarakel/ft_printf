/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <jbuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:28:36 by jbuan             #+#    #+#             */
/*   Updated: 2021/08/05 08:36:21 by jbuan            ###   ########.fr       */
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
