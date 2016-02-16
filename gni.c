/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 13:05:35 by ghery             #+#    #+#             */
/*   Updated: 2016/02/13 14:53:16 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

int				ft_get_next_line(int const fd, char **line)
{
	char			*buffer;
	static char		*r;
	int				i;
	int				j;
	int				k;
	int				n;
	size_t			t;

	i = 0;
	j = 0;
	k = 0;
	n = 0;
	buffer = (char*)ft_memalloc(sizeof(char) * BUFF_SIZE);
	r = (char*)ft_memalloc(sizeof(char) * BUFF_SIZE);
	while (n != 1)
	{
	//	t = read(fd, buffer, BUFF_SIZE);
		while (i < BUFF_SIZE && n != 1)
		{
			while (r[i] != NULL && r[i] != '\n' )
			{
				*line[k] = r[i];
				r[i] = NULL;
				k++;
				i++;
			}
			if (r[i] == '\n')
			{
				r[i] = NULL;
				n = 1;
			}
			i++;
		}
		if (n != 1)
		{
			t = read(fd, buffer, BUFF_SIZE);
			while (j < BUFF_SIZE && buffer[j] != '\n')
			{
				*line[j + k] = buffer[j];
				j++;
			}
			if (buffer[j] == '\n')
			{
				i = 0;
				j++;
				while (j < BUFF_SIZE)
				{
					r[i] = buffer[j];
					j++;
					i++;
				}
				n = 1;
			}
		}

	}
	return (line);
}
