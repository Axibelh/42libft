/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrnan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:10:58 by aherrnan          #+#    #+#             */
/*   Updated: 2023/09/13 17:12:00 by aherrnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <ctype.h>*/
int	ft_isalnum(char c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*int main(void)
{
	char c = '5';
	char d = 'A';
	printf("%d\n",isalnum(c));
	printf("%d\n",isalnum(d));
	printf("%d\n", ft_isalnum(c));
	printf("%d", ft_isalnum(d));
			return(0);
}*/
