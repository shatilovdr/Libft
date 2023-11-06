/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:33:34 by dshatilo          #+#    #+#             */
/*   Updated: 2023/11/06 11:25:32 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	num;

	num = 0;
	if (count != 0 && ((num - 1) / count) < size)
		return (0);
	num = count * size;
	mem = malloc(num);
	if (!mem)
		return (0);
	ft_memset(mem, 0, num);
	return (mem);
}
