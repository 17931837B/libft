/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:22:50 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 14:22:50 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int num)
{
	while (num > 0 && *s1 && *s2)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		num--;
	}
	if (num == 0)
		return (0);
	else
		return ((unsigned char)*s1 - (unsigned char)*s2);
}
