/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:39:24 by aburnott          #+#    #+#             */
/*   Updated: 2022/10/04 17:44:00 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *dest, void *src, size_t n)
{
	unsigned char	*cpy_dest;
	unsigned char	*cpy_src;
	unsigned char	*temp;
	int				i;

	if (!src)
		return (0);
	*cpy_dest = (unsigned char *)dest;
	*cpy_src = (unsigned char *)src;
	i = 0;
	while (i < n && cpy_src)
	{
		temp[i] = cpy_src[i];
		i++;
	}
	i = 0;
	while (i < n && cpy_src)
	{
		cpy_dest[i] = temp[i];
		i++;
	}
	return (dest);
}
