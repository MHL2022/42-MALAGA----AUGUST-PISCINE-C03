/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:18:06 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/28 17:40:09 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
 char *ft_strncat(char *dest, char *src, unsigned int nb);
 int	main()
{
	char dest[] = "Maria y ";
	char src[] = "Helena";
	 printf("%s\n", ft_strncat(dest, src, 2));
}
