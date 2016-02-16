/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:01:07 by ghery             #+#    #+#             */
/*   Updated: 2016/02/13 17:01:56 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*temp;

	temp = (void *)malloc(sizeof(src[0]) * len);
	if (temp == NULL)
		return (NULL);
	temp = ft_memcpy(temp, src, len);
	dst = ft_memcpy(dst, temp, len);
	free(temp);
	return (dst);
}
