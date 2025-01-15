/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:19:49 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 14:19:49 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *to, char *from)
{
	char			*top;

	top = to;
	while (*from != '\0')
	{
		*to = *from;
		from++;
		to++;
	}
	*to = '\0';
	return (top);
}

char	*ft_strdup(char *src)
{
	unsigned int	len;
	char			*res;

	len = ft_strlen(src);
	res = NULL;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	ft_strcpy(res, src);
	return (res);
}
