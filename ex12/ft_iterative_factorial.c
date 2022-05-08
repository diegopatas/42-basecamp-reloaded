/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:33:10 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/03 19:15:52 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	if ((nb < 0) || (nb > 16))
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}
