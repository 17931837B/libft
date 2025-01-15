/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:18:55 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 14:18:55 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, unsigned int num)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = ptr1;
	p2 = ptr2;
	while (num)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		num--;
	}
	return (0);
}
