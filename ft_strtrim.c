/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:23:07 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 14:23:07 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*res;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && isset(*s1, set))
		s1++;
	len = ft_strlen(s1);
	while (len && isset(s1[len - 1], set))
		len--;
	res = ft_calloc(len + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, s1, len);
	return (res);
}
