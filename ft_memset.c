/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:01:01 by aburnott          #+#    #+#             */
/*   Updated: 2022/10/03 18:01:01 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;

	dest = (unsigned char) s;
	if (!s)
		return (0);
	while (n > 0 && dest)
	{
		dest = (unsigned char)c;
		dest++;
		n--;
	}
	s = (void *)dest;
	return (s);
}
