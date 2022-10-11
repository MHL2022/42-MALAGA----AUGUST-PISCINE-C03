/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marialedesmabasualdo <maledesm@studen      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:32:55 by marialede         #+#    #+#             */
/*   Updated: 2022/08/25 14:09:14 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int	main()
{
	int	n;

	
	n = ft_strcmp("holanda", "holamariacomoestas");
	if (n > 0)
	{	
		printf ("%ds1 mayor que s2", n);
	}
	else if (n < 0)
	{
		printf ("%ds1 menor que s2", n);
	}
	else 
	{
		printf("%d s1 igual que s2", n);
	}
	return (0);
}
