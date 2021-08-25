/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base16_maj.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:55:23 by jbuan             #+#    #+#             */
/*   Updated: 2021/08/25 12:11:31 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base16_maj(unsigned int nbr, t_list *s_list)
{
	int		size_base;
	int		nbr_final[100];
	int		i;
	char	*base;

	size_base = 16;
	base = "0123456789ABCDEF";
	i = 0;
	if (nbr == 0)
		ft_putchar('0', s_list);
	while (nbr)
	{
		nbr_final[i] = nbr % size_base;
		nbr = nbr / size_base;
		i++;
	}
	while (--i >= 0)
		ft_putchar(base[nbr_final[i]], s_list);
}
