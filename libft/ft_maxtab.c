/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 18:26:25 by ghery             #+#    #+#             */
/*   Updated: 2015/12/13 18:47:05 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_maxtab(int *tab, int len)
{
	int i;
	int max;

	i = 0;
	max = tab[0];
	if (tab == NULL)
		return ((int)NULL);
	while (i < len)
	{
		i++;
		if (tab[i] > tab[i - 1])
			max = tab[i];
	}
	return (max);
}
