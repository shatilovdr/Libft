/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:33:34 by dshatilo          #+#    #+#             */
/*   Updated: 2023/10/27 11:53:12 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	i;
	size_t	len;

	len = count * size;
	if (len / count != size)
		return (0);
	mem = malloc(len);
	if (mem == 0)
		return (0);
	i = 0;
	while (i < count * size)
		*((char *)mem + i++) = 0;
	return (mem);
}

// #include <limits.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int	*test;

// 	test = ft_calloc(SIZE_T_MAX, 0);
// 	printf("ft:%p\n", test);

// 	return (0);
// }
