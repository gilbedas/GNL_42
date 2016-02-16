/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 21:00:20 by ghery             #+#    #+#             */
/*   Updated: 2016/02/16 12:56:57 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;
	size_t	i;

	i = 0;
	mem = (void *)malloc(size);
	if (mem == NULL)
		return (NULL);
	while (i <= size)
	{
		mem[i] = 0;
		i++;
	}
	return (void *)(mem);
}
