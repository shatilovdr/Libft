/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:06:12 by dshatilo          #+#    #+#             */
/*   Updated: 2023/10/26 17:02:13 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (*((unsigned char *)s + i) != 0 && i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char) c)
			return ((unsigned char *)s + i);
		i++;
	}
	if ((unsigned char) c == 0)
		return ((unsigned char *)s + i);
	return (0);
}
