/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:55:45 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/28 19:46:04 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
 char *ft_strstr(char *str, char *to_find);
 int	main()
{
	char str[] = "holmariamar";
	char to_find[] = "hola";
	 printf("%s\n", ft_strstr(str, to_find));
}

