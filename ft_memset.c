/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:19:12 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 14:19:12 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, unsigned int num)
{
	unsigned char	sp;
	unsigned char	*p;

	sp = (unsigned char)value;
	p = (unsigned char *)ptr;
	while (num)
	{
		*p = sp;
		num--;
		p++;
	}
	return (ptr);
}
