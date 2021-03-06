/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:10:29 by ddiniz            #+#    #+#             */
/*   Updated: 2022/03/30 16:14:00 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 0;
	if (nb <= 0 || nb == 2)
		return (0);
	while (i < 46340)
	{
		result = i * i;
		if (result == nb)
			return (i);
		i++;
	}
	return (0);
}
