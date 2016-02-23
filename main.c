/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 12:06:35 by ghery             #+#    #+#             */
/*   Updated: 2016/02/23 18:39:41 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		i;
	int		j;

	fd = open(argv[1], O_RDONLY);
	i = argc;
	i = 6;
	while ((j = get_next_line(fd, &line)) == 1)
	{
		ft_putstr("[");
		ft_putnbr(j);
		ft_putstr("]");
		ft_putendl(line);
	}
	ft_putstr("[");
	ft_putnbr(j);
	ft_putstr("]");
	ft_putendl(line);
	return (0);
}
