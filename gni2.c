/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 14:19:05 by ghery             #+#    #+#             */
/*   Updated: 2016/02/13 15:45:55 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_get_next_line(int const fd, char **line)
{
	char		*buffer;
	static char	*RS;
	size_t		RV;
	char		*pointer;
	int			i;

	pointer = ft_memchr(RS, '\n');
	buffer = (char*)ft_memalloc(sizeof(char) * BUFF_SIZE);
	if (pointer == NULL)
	{
		RV = read(fd, buffer, BUFF_SIZE);
		RS = 
	}
	else
	{
		while (pointer != &RS[0])
		{
			*pointer--;
			i++;
		}
		*line = (char *)ft_memalloc(sizeof(char) * (i + 1));
		i++;
		*line[i] = '\0';
		while((i--) >= 0)
			RS[i] = *line[i];
	}
}
