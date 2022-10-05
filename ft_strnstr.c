/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:03:58 by aburnott          #+#    #+#             */
/*   Updated: 2022/10/05 17:33:35 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	j;

	if (!s2)
		return ((char *)s1);
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j] && s1[i + j] && n > 0)
			j++;
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
		n--;
	}
	return (NULL);
}
