/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrnan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:47:46 by aherrnan          #+#    #+#             */
/*   Updated: 2023/10/03 14:14:53 by aherrnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <strings.h>*/
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
/*int main(void)
{
    char s[8]= "danonino";
    printf("antes de mi función %s\n",s);
    ft_bzero(s,4);
    //bzero(s,4);
    printf("%s  S despues de mi función\n",s);
    //printf("%s depues de bzero", s);
    return(0);
}*/
