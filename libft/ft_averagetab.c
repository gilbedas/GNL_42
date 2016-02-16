/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_averagetab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 18:23:37 by ghery             #+#    #+#             */
/*   Updated: 2015/12/13 18:40:02 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_averagetab(int *tab, int len)
{
	int i;
	int max;

	i = 0;
	max = tab[0];
	if (tab == NULL)
		return ((int)NULL);
	while (i < len)
	{
		max = max + tab[i];
		i++;
	}
	return (max / i);
}
