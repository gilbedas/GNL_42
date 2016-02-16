/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_divtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 17:56:01 by ghery             #+#    #+#             */
/*   Updated: 2015/12/04 00:04:45 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_divtab(const int c)
{
	int i;
	int b;
	int j;
	int *k;

	j = 0;
	i = 1;
	b = c / 2;
	k = (int *)malloc(sizeof(int) * ft_divcount(c));
	while (i <= b)
	{
		if (c % i == 0)
		{
			k[j] = i;
			j++;
		}
		i++;
	}
	if (c != 1)
	{
		k[j] = c;
	}
	return (k);
}
