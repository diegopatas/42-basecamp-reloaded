/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:57:27 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/03 20:10:29 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_strlen(char *str)
{
	int	num_str;

	num_str = 0;
	while (*str)
	{
		str++;
		num_str++;
	}
	return (num_str);
}

int	main(int argc, char *argv[])
{
	int		fd;
	int		content[100];
	char	*many;
	char	*missing;
	int		rd;

	many = "Too many arguments.";
	missing = "File name missing.";
	if (argc == 1)
		write(1, missing, ft_strlen(missing));
	else if (argc > 2)
		write(1, many, ft_strlen(many));
	else
	{
		fd = open (argv[1], O_RDONLY);
		if (fd < 0)
			return (0);
		rd = read (fd, content, 100);
		while (rd > 0)
		{
			write (1, content, rd);
			rd = read (fd, content, 100);
		}
		close (fd);
	}
}
