/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 15:46:58 by ghery             #+#    #+#             */
/*   Updated: 2016/02/23 14:44:45 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

static int		ft_iszero(int index, char *str, char **line)
{
	if (str[0] == '\0')
	{
		*line = "";
		return (0);
	}
	*line = ft_strdup(str + index);
	return (1);
}

int				get_next_line(int const fd, char **line)
{
	static char		*str;
	int				index;
	int				rtr;
	char			*buffer;
	char 			*tmp;

	index = 0;
	if (fd < 0)
		return (-1);
	buffer = (char*)ft_memalloc(BUFF_SIZE);
	if (!(str))
		str = (char*)ft_memalloc(BUFF_SIZE + 1);
	while (str[index] != '\n')
	{
		if (str[index] == '\0' && index % BUFF_SIZE != 0)
		{
			*line = ft_strdup(str);
			free(buffer);
			str = NULL;
			return (1);
		}
		else if (str[index] == '\0')
		{
			rtr = read(fd, buffer, BUFF_SIZE);
			if (rtr == 0)
				return (ft_iszero(index, str, line));
			if (rtr == -1)
				return (-1);
			tmp = ft_strjoin(str, buffer);
			str = tmp;
			index--;
		}
		index++;
	}
	*line = ft_strndup(str, index);
	index++;
	str = ft_strdup(str + index);
	free(buffer);
	return (1);
}
