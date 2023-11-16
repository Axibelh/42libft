/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrnan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:29:16 by aherrnan          #+#    #+#             */
/*   Updated: 2023/10/17 00:00:32 by aherrnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;

	srclen = 0;
	i = 0;
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize -1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}
/*int main(void)
{
    char s[10]="don";
	char d[7]="";
    size_t t = 1;
    //printf("%zu\n", ft_strlcpy(d,s,t));
	printf("%lu\n", strlcpy(d,s,t));
    printf("%s",d);
	return(0);
}*/
