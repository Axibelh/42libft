/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrnan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:50:49 by aherrnan          #+#    #+#             */
/*   Updated: 2023/10/21 17:41:09 by aherrnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	signo;
	int	num;
	int	i;

	num = 0;
	signo = 1;
	while ((*str == 32) || (*str >= 9) && (*str <= 13))
	{
		str++;
	}
	if ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
		{
			signo = -1;
		}
		str++;
	}
	while ((*str != '\0') && (*str >= '0') && (*str <= '9'))
	{
		num = num * 10 + *str - '0';
		str++;
	}
	return (signo * num);
}
