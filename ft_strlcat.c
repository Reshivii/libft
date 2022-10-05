/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:10:42 by aburnott          #+#    #+#             */
/*   Updated: 2022/10/05 22:07:42 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	if (!src)
		return (0);
	if (n == 0 || n <= dest_len)
		return (src_len + n);
	while (src[i] && i < n - dest_len - 1 && n != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dest_len + src_len);
}
