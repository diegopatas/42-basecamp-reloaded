/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:40:06 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/01 18:15:58 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *str);

int	main(void)
{
	char	*teste = "string teste";

	printf("Str original: %s\nStr dup: %s\n", teste, ft_strdup(teste));
	return (0);
}
