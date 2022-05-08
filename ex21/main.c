/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:50:55 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/01 19:13:14 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*arr;
	int	i;

	arr = ft_range(2, 5);
	i = 0;
	puts("Elements: ");
	while (i < 3)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}
