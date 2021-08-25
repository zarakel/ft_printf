/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <jbuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:53:51 by jbuan             #+#    #+#             */
/*   Updated: 2021/08/25 12:20:44 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	t_list	*s_list;

	s_list = malloc(sizeof(t_list));
	s_list->Count_Putchar = 0;
	va_start(ap, s);
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			Converters(s[i + 1], ap, s_list);
			i++;
		}
		else
			ft_putchar(s[i], s_list);
		i++;
	}
	i = s_list->Count_Putchar;
	free(s_list);
	return (i);
}
