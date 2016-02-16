/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:37:13 by ghery             #+#    #+#             */
/*   Updated: 2015/12/03 16:03:04 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	total;
	int minus;

	c = 0;
	total = 0;
	minus = 1;
	while ((str[c] == ' ') || (str[c] == '\n') || (str[c] == '	') ||
			(str[c] == '\t') || (str[c] == '\r') || (str[c] == '\v') ||
			(str[c] == '\f'))
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			minus = minus - 2;
		c++;
	}
	while ((str[c] >= '0') && (str[c] <= '9'))
	{
		total = total * 10;
		total = total + (str[c] - 48);
		c++;
	}
	return (total * minus);
}
