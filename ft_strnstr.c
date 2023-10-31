/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:44:59 by dshatilo          #+#    #+#             */
/*   Updated: 2023/10/31 19:03:29 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == 0 || ((char *)haystack == 0 && len == 0))
		return ((char *)haystack);
	i = 0;
	while (*(haystack + i) != 0 && i < len)
	{
		j = 0;
		if (*(haystack + i) == *needle)
		{
			while ((*(haystack + i) == *(needle + j)) && *(needle + j) != 0)
			{
				i++;
				j++;
			}
			if (*(needle + j) == 0)
				return ((char *)haystack + i - j);
			i--;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	haystack[] = "";
	char	needle[] = "asfasdfasd";

	printf("!%s!\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	return (0);
}
