/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:10:02 by dshatilo          #+#    #+#             */
/*   Updated: 2023/11/01 17:39:44 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-' && ft_isdigit(*(str + 1)))
		{
			result = -1 * (*(str + 1) - 48);
			sign = -1;
			str++;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + sign * (*str - 48);
		if (result / sign < 0)
			return ((sign > 0) * -1);
		str++;
	}
	return (result);
}
