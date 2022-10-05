/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:32:15 by aburnott          #+#    #+#             */
/*   Updated: 2022/10/05 13:32:15 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*cpy_s;

	if (!s)
		return ;
	i = 0;
	cpy_s = (unsigned char *)s;
	while (i < n)
	{
		if (cpy_s[i] == c)
			return ;
		i++;
	}
}
