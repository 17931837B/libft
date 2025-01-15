/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:18:08 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 14:18:08 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, unsigned int num)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (num)
	{
		*p = 0;
		num--;
		p++;
	}
}
