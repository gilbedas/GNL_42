/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:38:49 by ghery             #+#    #+#             */
/*   Updated: 2015/12/03 20:48:50 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alist, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (alist != NULL)
	{
		while (*alist != NULL)
		{
			tmp = NULL;
			if ((*alist)->next != NULL)
				tmp = (*alist)->next;
			ft_lstdelone(alist, del);
			*alist = tmp;
		}
		*alist = NULL;
	}
}
