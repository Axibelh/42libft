/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrnan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:29:50 by aherrnan          #+#    #+#             */
/*   Updated: 2023/10/11 20:55:23 by aherrnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*p;	

	p = s;
	while (n--)
	{
		if (*p == (unsigned char)c)
		{
			return ((void *)p);
		}		
		p++;
	}
	return (NULL);
}
