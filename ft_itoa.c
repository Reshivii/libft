/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:58:01 by aburnott          #+#    #+#             */
/*   Updated: 2022/10/10 21:50:59 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calc_len(int n)
{
	long	size;

	size = 1;
	while (n > 9)
	{
		n /= 10;
		size++;
	}
	return (size);
}

void	convert(char *s, int len, int n, int isn)
{
	s[len] = '\0';
	len--;
	while (len >= isn)
	{
		s[len] = (n % 10 + '0');
		n /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{	
	int		len;
	char	*res;
	int		is_negative;

	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}
	len = calc_len(n);
	res = malloc(sizeof(*res) * len + 1);
	if (!res)
		return (0);
	if (is_negative)
		res[0] = '-';
	convert(res, len, n, is_negative);
	return (res);
}
