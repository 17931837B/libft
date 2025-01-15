/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:22:57 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 14:22:57 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *src, unsigned int le)
{
	unsigned int	s_len;

	s_len = ft_strlen(src);
	if (*src == '\0')
		return ((char *)dest);
	if (le < s_len)
		return (0);
	while (*dest && le >= s_len)
	{
		if (ft_strncmp(dest, src, s_len) == 0)
			return ((char *)dest);
		dest++;
		le--;
	}
	return (0);
}
