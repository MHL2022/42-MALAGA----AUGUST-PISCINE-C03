/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:51:21 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/25 14:27:30 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main ()
{
	printf("%d\n", ft_strcmp("maria", "m"));
	printf("%d\n", ft_strcmp("m", "elenayolivia"));
	printf("%d\n", ft_strcmp("maria", "maria"));

	printf("%d\n", strcmp("maria", "m"));
	printf("%d\n", strcmp("maria", "elenayolivia"));
	printf("%d\n", strcmp("maria", "maria"));
}

