/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 00:21:29 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/02 21:16:14 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	sort(char *argv[], int size);
void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	argv_index;
	int	str_index;

	sort(argv, argc);
	argv_index = 1;
	while (argv_index < argc)
	{
		str_index = 0;
		while (argv[argv_index][str_index])
		{
			ft_putchar((argv[argv_index][str_index]));
			str_index++;
		}
		ft_putchar('\n');
		argv_index++;
	}
}

void	sort(char *argv[], int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < (size - 1))
	{
		j = 1;
		while (j < (size - 1))
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
