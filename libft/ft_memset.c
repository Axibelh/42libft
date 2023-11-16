/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrnan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:15:07 by aherrnan          #+#    #+#             */
/*   Updated: 2023/10/03 14:22:52 by aherrnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<string.h>*/
#include<stdio.h>

void	*ft_memset(void *p, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i != len)
	{
		((char *)p)[i] = (unsigned char) c;
		i++;
	}
	return (p);
}
/*int main(void)
{
char s[20]="holacaraballo";
printf("%s\n", memset(s+5,'.',3));
printf("%s", ft_memset(s+5,'.',3));
}*/
