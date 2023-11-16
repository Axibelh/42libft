/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrnan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:23:47 by aherrnan          #+#    #+#             */
/*   Updated: 2023/10/02 23:08:49 by aherrnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <ctype.h>*/
int	ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		c = c -32;
		return (c);
	}
	return (c);
}

/*int main()
{
	//int c = 'd';
	printf("%c\n", ft_toupper('1'));
	printf("%c", toupper('1'));
	return(0);
}*/
