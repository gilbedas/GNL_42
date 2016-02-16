/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:54:04 by ghery             #+#    #+#             */
/*   Updated: 2015/12/03 15:42:43 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ts;

	i = 0;
	ts = (char *)s;
	while (ts[i])
	{
		if (ts[i] == (char)c)
			return (ts + i);
		i++;
	}
	if (ts[i] == (char)c)
		return (ts + i);
	return (NULL);
}
