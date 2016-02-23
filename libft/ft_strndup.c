/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 11:06:57 by ghery             #+#    #+#             */
/*   Updated: 2016/02/17 16:18:43 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char *s2;

	s2 = (char *)ft_memalloc(sizeof(char) * (n + 1));
	if (!s2)
		return (NULL);
	return (ft_strncpy(s2, s1, n));
}
