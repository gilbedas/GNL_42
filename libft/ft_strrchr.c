/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:03:49 by ghery             #+#    #+#             */
/*   Updated: 2015/12/03 15:43:02 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ts;

	ts = (char *)s;
	i = ft_strlen(ts);
	while (i >= 0)
	{
		if (s[i] == c)
			return (ts + i);
		i--;
	}
	return (NULL);
}
