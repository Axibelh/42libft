/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrnan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:58:59 by aherrnan          #+#    #+#             */
/*   Updated: 2023/10/02 23:07:51 by aherrnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <ctype.h>*/
int	ft_tolower(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		c = c +32;
		return (c);
	}
	return (c);
}
/**int main()
{
	//int c = 'd';
	printf("%c\n", ft_tolower('p'));
	printf("%c", tolower('p'));
	return(0);
}*/
