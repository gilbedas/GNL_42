/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 15:46:58 by ghery             #+#    #+#             */
/*   Updated: 2016/02/16 12:59:57 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static char		*str;
	int				index;
	size_t			rtr;
	char			*buffer;
	char 			*tmp;
	
	index = 0;
	buffer = (char*)ft_memalloc(BUFF_SIZE);
	if (!(str))
		str = (char*)ft_memalloc(BUFF_SIZE + 1);
	while (str[index] != '\n')
	{
		if (str[index] == '\0')
		{
			rtr = read(fd, buffer, BUFF_SIZE);
			tmp = ft_strjoin(str, buffer);
			*str =	*tmp;
		}
		index++;
	}
	index++;
	printf("index = %d\n", index);
	*line = ft_strdup(str + index);
	printf("%s\n", *line);
	str = ft_strdup(str + index);
	free(buffer);
	return (rtr);
}
