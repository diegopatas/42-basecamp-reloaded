/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:17:36 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/02 21:16:37 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	arg_index;
	int	str_index;

	arg_index = 1;
	while (arg_index < argc)
	{
		str_index = 0;
		while (argv[arg_index][str_index])
		{
			ft_putchar(argv[arg_index][str_index]);
			str_index++;
		}
		ft_putchar('\n');
		arg_index++;
	}
	return (0);
}
