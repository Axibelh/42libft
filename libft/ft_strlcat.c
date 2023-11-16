/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrnan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 00:01:26 by aherrnan          #+#    #+#             */
/*   Updated: 2023/10/17 06:13:35 by aherrnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	destlen;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dst);
	j = destlen;
	i = 0;
	if (destlen < dstsize - 1 && dstsize > 0)
	{
		while (src[i] != '\0' && destlen + i < dstsize - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	if (destlen >= dstsize)
	{
		destlen = dstsize;
	}
	return (destlen + srclen);
}
/*int main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "World!";
    size_t size = 20;

    // Concatenar src a dest usando ft_strlcat
    size_t result = ft_strlcat(dest, src, size);

    printf("Concatenado: %s\n", dest);
    printf("Longitud total de la cadena concatenada: %zu\n", result);

    return (0);
}*/
