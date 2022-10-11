/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:35:45 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/28 17:22:12 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
 char *ft_strcat(char *dest, char *src);
 int	main()
{
	char dest[] = "Maria y ";
	char src[] = "Helena";
	 printf("%s\n", ft_strcat(dest, src));
}


