/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:19:01 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 14:19:01 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned int num)
{
	unsigned char		*cpy_d;
	const unsigned char	*cpy_s;

	if (dest == NULL && src == NULL)
		return (dest);
	cpy_d = dest;
	cpy_s = src;
	cpy_s = (unsigned char *)cpy_s;
	while (num)
	{
		*cpy_d = *cpy_s;
		cpy_d++;
		cpy_s++;
		num--;
	}
	return (dest);
}
