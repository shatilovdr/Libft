/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:02:34 by dshatilo          #+#    #+#             */
/*   Updated: 2023/10/27 17:27:34 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char	*dest, char	*src);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*s;

	len = ft_strlen(s1) + ft_strlen(s1) + 1;
	if (len <= ft_strlen(s1) || len <= ft_strlen(s2))
		return (0);
	s = malloc(sizeof(char) * len);
	if (!s)
		return (0);
	s = ft_strcpy(s, (char *)s1);
	ft_strcpy(s + ft_strlen(s1), (char *)s2);
	return (s);
}

static char	*ft_strcpy(char	*dest, char	*src)
{
	size_t	i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = 0;
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <limits.h>

// int	main(void)
// {
// 	size_t	v1 = 18446744073709551615ULL;	
// 	size_t	v2 = 18446744073709551615ULL;
// 	size_t	sum = v2 + v1;
// 	printf("%zu\n",sum) ;
// 	//sum -= v1;


// 	printf("%zu\n",SIZE_T_MAX) ;
// 	return (0);
// }
