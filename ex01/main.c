/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:14:20 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/29 11:51:38 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main ()
{
	unsigned	int	n;

	n = 5;
	printf("%d\n", ft_strncmp("mar", "maria", n));
	printf("%d\n", ft_strncmp("mariamercedes", "hom", n));
	printf("%d\n", ft_strncmp("maria", "maria", n));
}
