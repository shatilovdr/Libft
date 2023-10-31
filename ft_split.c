/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:38:51 by dshatilo          #+#    #+#             */
/*   Updated: 2023/10/30 17:21:54 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			count_words(char *str, char c);

static char		*ft_strncpy(char	*dest, char	*src, size_t n);

static void		ft_split2(char const *s, char c, char **result);

char	**ft_split(char const *s, char c)
{
	char		**result;

	if (!s)
		return (0);
	result = (char **)malloc(sizeof(char *) * (count_words((char *)s, c) + 1));
	if (!result)
		return (0);
	ft_split2(s, c, result);
	return (result);
}

static void	ft_split2(char const *s, char c, char **result)
{
	size_t	pos;
	size_t	i;
	size_t	l;

	i = 0;
	pos = 0;
	while (*(s + i) != 0)
	{
		l = 0;
		if (!(*(s + i) == c) && (i == 0 || *(s + i - 1) == c))
		{
			while (*(s + i + l) != 0 && *(s + i + l) != c)
				l++;
			*(result + pos) = (char *)malloc(sizeof(char) * (l + 1));
			*(result + pos) = ft_strncpy(*(result + pos), (char *)s + i, l);
			i += (l - 1);
			pos++;
		}
		i++;
	}
	*(result + pos) = 0;
}

size_t	count_words(char *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*(str + i) != 0)
	{
		if (!(*(str + i) == c))
			if (i == 0 || *(str + i - 1) == c)
				count++;
		i++;
	}
	return (count);
}

static char	*ft_strncpy(char	*dest, char	*src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = 0;
	return (dest);
}
