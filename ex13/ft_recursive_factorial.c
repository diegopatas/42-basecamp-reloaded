/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:51:25 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/03 19:13:39 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ((nb < 0) || (nb > 16))
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
