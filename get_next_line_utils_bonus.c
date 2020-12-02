/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfournio <sfournio@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 07:10:00 by sfournio          #+#    #+#             */
/*   Updated: 2020/12/01 21:39:30 by sfournio         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t		ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char		*ft_strdup(const char *src)
{
	char	*str;

	if (!(str = malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	ft_memcpy(str, src, ft_strlen(src));
	str[ft_strlen(src)] = '\0';
	return (str);
}

void		*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < size)
	{
		((unsigned char *)dest)[i] = ((unsigned const char *)src)[i];
		i++;
	}
	return (dest);
}

char		*ft_substr(char const *s, int start, int len)
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	if (!(str = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
