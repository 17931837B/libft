/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:22:36 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 14:22:36 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total;
	unsigned int	copy_len;
	unsigned int	i;

	if (dest == NULL || size == 0)
		return (ft_strlen(src));
	if (src == NULL)
		return (0);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total = ft_strlen(dest) + ft_strlen(src);
	if (dest_len >= size)
		return (size + src_len);
	copy_len = size - 1 - dest_len;
	if (src_len < copy_len)
		copy_len = src_len;
	i = 0;
	ft_memcpy(dest + dest_len, src, copy_len);
	dest[dest_len + copy_len] = '\0';
	return (total);
}
