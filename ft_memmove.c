/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:39:24 by aburnott          #+#    #+#             */
/*   Updated: 2022/10/05 20:54:39 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*cpy_dest;
	char	*cpy_src;
	char	*temp;
	size_t	i;

	if (!src)
		return (0);
	temp = 0;
	cpy_dest = (char *)dest;
	cpy_src = (char *)src;
	i = 0;
	while (i < n)
	{
		temp[i] = cpy_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		cpy_dest[i] = temp[i];
		i++;
	}
	return (dest);
}
