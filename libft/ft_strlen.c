/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrnan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:24:38 by aherrnan          #+#    #+#             */
/*   Updated: 2023/10/03 14:25:24 by aherrnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <string.h>

size_t	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (*str != '\0')
	{
		c++;
		str++;
	}
	return (c);
}
/*int main(void)
{
	char j[20]="Esto es 42";
	int read = ft_strlen(j);	
	printf("%d\n", read);
	printf("%lu", strlen(j));
	return(0);
}*/
