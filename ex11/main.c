/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 00:40:59 by ddiniz            #+#    #+#             */
/*   Updated: 2022/03/30 14:24:05 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*divp;
	int	*modp;

	a = 4;
	b = 2;
	div = 0;
	mod = 0;
	divp = &div;
	modp = &mod;
	ft_div_mod(a, b, divp, modp);
	printf("div: %d\nmod: %d", div, mod);
	return (0);
}
