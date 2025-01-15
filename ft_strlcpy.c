/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:19:07 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 11:19:07 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	cpy_len;

	src_len = ft_strlen(src);
	if (dest == NULL || src == NULL)
		return (0);
	src_len = ft_strlen(src);
	if (src_len >= size)
		cpy_len = size - 1;
	else
		cpy_len = src_len;
	if (size != 0)
	{
		ft_memcpy(dest, src, cpy_len);
		dest[cpy_len] = '\0';
	}
	return (src_len);
}
