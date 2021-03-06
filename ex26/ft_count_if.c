/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:23:42 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/03 19:53:37 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			a++;
		i++;
	}
	return (a);
}
