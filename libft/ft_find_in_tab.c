/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 18:25:08 by ghery             #+#    #+#             */
/*   Updated: 2015/12/13 18:42:14 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find_in_tab(int *tab, int c, int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (tab == NULL)
		return ((int)NULL);
	while (i < len)
	{
		if (tab[i] == c)
			j++;
		i++;
	}
	return (j);
}
