/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:18:13 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 14:18:13 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*res;

	if (num > 0 && SIZE_MAX / num < size)
		return (NULL);
	total_size = (size_t)num * size;
	res = malloc(total_size);
	if (res == NULL)
		return (NULL);
	else
		ft_memset(res, 0, total_size);
	return (res);
}
