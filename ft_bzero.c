/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:23:41 by aburnott          #+#    #+#             */
/*   Updated: 2022/10/03 18:23:41 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	dest;

	if (!s)
		return (0);
	dest = (unsigned char) s;
	while (n > 0 && dest)
	{
		dest = '0';
		dest++;
		n--;
	}
	s = (void *)dest;
	return (s);
}
