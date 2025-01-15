/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:23:02 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 14:23:02 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*res;

	res = 0;
	while (*str != '\0')
	{
		if (*str == (char)c)
			res = str;
		str++;
	}
	if (*str == (char)c)
		res = str;
	return ((char *)res);
}
