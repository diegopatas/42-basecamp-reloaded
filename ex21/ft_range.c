/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:38:37 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/01 19:20:51 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	*hold_ptr;
	int	range;

	range = max - min;
	if (min >= max)
		return (NULL);
	ptr = (int *) malloc(range * sizeof(int));
	hold_ptr = ptr;
	while (min < max)
	{
		*ptr = min;
		ptr++;
		min++;
	}
	return (hold_ptr);
}
