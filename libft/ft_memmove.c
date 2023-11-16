/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrnan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:47:07 by aherrnan          #+#    #+#             */
/*   Updated: 2023/10/11 23:27:18 by aherrnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	unsigned char		*srce;
	size_t				i;

	dest = ((unsigned char *)dst);
	srce = ((unsigned char *)src);
	if ((len == 0) || (dest == srce))
		return (dest);
	if (srce < dest)
	{
		i = len;
		while (i--)
		{
			dest[i] = srce[i];
		}
		return (dest);
	}
	i = 0;
	while (i < len)
	{
		dest[i] = srce[i];
		i++;
	}
	return (dest);
}
