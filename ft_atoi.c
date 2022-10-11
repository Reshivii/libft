/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:32:50 by aburnott          #+#    #+#             */
/*   Updated: 2022/10/11 18:09:59 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned long	res;
	int				temp;

	i = 0;
	sign = 1;
	res = 0;
	temp = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && ++temp)
		res = res * 10 + str[i++] - 48;
	if ((res >= 9223372036854775807 || temp >= 20) && sign == 1)
		return (-1);
	else if ((res > 9223372036854775807 || temp >= 20) && sign == -1)
		return (0);
	return (sign * res);
}
