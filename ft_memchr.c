/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:17:42 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 14:17:42 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, unsigned int num)
{
	const unsigned char	*p;

	p = ptr;
	while (num)
	{
		if (*p == (unsigned char)value)
			return ((void *)p);
		p++;
		num--;
	}
	return (0);
}
