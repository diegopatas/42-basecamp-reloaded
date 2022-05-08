/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 00:24:35 by ddiniz            #+#    #+#             */
/*   Updated: 2022/03/30 00:31:14 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 1;
	b = 2;
	pa = &a;
	pb = &b;
	ft_swap(pa, pb);
	printf("a: %d\nb: %d", a, b);
	return (0);
}
