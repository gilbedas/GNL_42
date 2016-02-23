/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 12:52:26 by ghery             #+#    #+#             */
/*   Updated: 2016/02/23 19:22:03 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_verifstr(char *str)
{
	size_t		i;

	i = 0;
	while (i < ft_strlen(str))
	{
	//	ft_putendl("2");
		if (str[i] == '\n')
		{
	//		ft_putnbr(i);
			return (i);
		}
		i++;	
	}
	return (-1);
}

static int	ft_out(char **str, char **line, int ret)
{
	char	*tmp;
	int		in;
	int		p;

	p = 1;
	in = ft_verifstr(*str);
//	ft_putendl("2");
	if (ret == 0)
	{
		if ((*str)[0] != '\0')
		{
		//	ft_putendl("4");
			*line = (in == -1) ? ft_strsub(*str, 0, ft_strlen(*str)) : \
					ft_strsub(*str, 0,in);
			*str = (in == -1) ? "\0" : ft_strsub(*str, in + 1, ft_strlen(*str) - (in + 1));
			return (p);
			//mettre tout le reste dans line si il y en a mettre et return 1
		}
		else
		{
			*line = "";
			return (0);
		}
	}	//sinon vider line free str et return 0
	if (ret > 0)
	{
		*line = ft_strsub(*str, 0, in);
		tmp = ft_strsub(*str, (in + 1), ft_strlen(*str) - (in));
		free(*str);
		*str = tmp;
		return (1);
	}
	return (0);
		//mettre in char dans line et supprimer in char de str return 1
}


int			get_next_line(int const fd, char **line)
{
	int			ret;
	static char	*str;
//	char 		*tmp;
	char 		*buffer;

	if (fd <= -1)
	{
//		ft_putendl("1");
		return (-1);
	}
	ret = 0;
	buffer = (char*)ft_memalloc(BUFF_SIZE + 1);
	if (!(str))
		str = (char*)ft_memalloc(BUFF_SIZE);
	while (ft_verifstr(str) == -1 &&
		   	(ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
	//	ft_putendl(str);
		buffer[ret] = '\0';
		str = ft_strjoin(str, buffer);
	}
	free(buffer);
	if (ret == -1)
	{
//		ft_putendl("2");
		return (-1);
	}
	return (ft_out(&str, line, ret));
}
