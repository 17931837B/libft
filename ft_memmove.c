/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:19:08 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 14:19:08 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*check_null(void *dest, unsigned int num)
{
	if (num == 0)
		return (dest);
	else
		return (NULL);
}

void	*ft_memmove(void *dest, const void *src, unsigned int num)
{
	unsigned char		*cpy_d;
	const unsigned char	*cpy_s;

	if (dest == NULL && src == NULL)
		return (check_null(dest, num));
	cpy_d = dest;
	cpy_s = src;
	cpy_s = (unsigned char *)cpy_s;
	if (cpy_d < cpy_s || cpy_d >= cpy_s + num)
		ft_memcpy(dest, src, num);
	else
	{
		cpy_d += num - 1;
		cpy_s += num - 1;
		while (num)
		{
			*cpy_d = *cpy_s;
			cpy_d--;
			cpy_s--;
			num--;
		}
	}
	return (dest);
}
