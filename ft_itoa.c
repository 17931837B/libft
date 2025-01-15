/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:18:43 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 14:18:43 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	itoa_negative(int *n, int *negative)
{
	if (*n < 0)
	{
		*negative = 1;
		*n *= -1;
	}
	else
		*negative = 0;
}

int	itoa_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		n = -n;
	else
	{
		while (n > 0)
		{
			len++;
			n /= 10;
		}
	}
	return (len);
}

void	itoa_convert(char *str, int n, int len, int negative)
{
	int	index;

	index = len - 1;
	str[len] = '\0';
	while (index >= 0)
	{
		str[index] = '0' + (n % 10);
		n /= 10;
		index--;
	}
	if (negative)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	int		negative;
	int		len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	itoa_negative(&n, &negative);
	len = itoa_len(n) + negative;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	itoa_convert(str, n, len, negative);
	return (str);
}
