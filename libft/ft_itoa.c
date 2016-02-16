/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:52:21 by ghery             #+#    #+#             */
/*   Updated: 2015/12/07 22:51:10 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*intmax(char *nb)
{
	char	*tab;

	tab = (char *)malloc(sizeof(char) * 12);
	tab = "-2147483648";
	nb = (char *)malloc(sizeof(char) * 12);
	if (nb == NULL)
		return (NULL);
	nb = ft_strcpy(nb, tab);
	return (nb);
}

char			*ft_itoa(int n)
{
	char	*nb;
	int		i;
	int		j;

	i = 1;
	j = 0;
	nb = NULL;
	if (n == -2147483648)
	{
		return (intmax(nb));
	}
	if (n < 0)
	{
		i++;
		j++;
		n = n * (-1);
	}
	i += ft_powerten(n);
	nb = (char *)malloc(sizeof(char) * i);
	if (nb == NULL)
		return (NULL);
	return (ft_nb_generator(n, i, j, nb));
}
