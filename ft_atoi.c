/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:18:03 by tobaba            #+#    #+#             */
/*   Updated: 2024/04/17 14:18:03 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	check_over(long long res, int next_num, int sign)
{
	if (sign == 1)
	{
		if (res >= 922337203685477580)
		{
			if (next_num >= 7)
				return (1);
			if (res >= 1000000000000000000 && res <= 9223372036854775806)
				return (1);
		}
	}
	if (sign == -1)
	{
		if (res >= 922337203685477580)
		{
			if (next_num >= 9)
				return (1);
		}
	}
	return (0);
}

int	handle_sign(int sign)
{
	if (sign == 1)
		return (-1);
	if (sign == -1)
		return (0);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] != '\0' && ((9 <= str[i] && str[i] <= 13) || str[i] == ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		if (check_over(res, (str[i] - '0'), sign))
			return (handle_sign(sign));
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(sign * res));
}
