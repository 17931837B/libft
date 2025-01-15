/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:20:00 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 14:20:00 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*res;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)ft_calloc(len + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, s1, ft_strlen(s1));
	ft_memcpy(res + ft_strlen(s1), s2, ft_strlen(s2));
	return (res);
}
