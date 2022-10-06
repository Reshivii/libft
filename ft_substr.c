/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:46:59 by aburnott          #+#    #+#             */
/*   Updated: 2022/10/06 13:00:08 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	sub = malloc(sizeof(*sub) * len + 1);
	if (!sub)
		return (0);
	i = -1;
	while (s[start] && i <= len && start <= len)
	{
		sub[i++] = s[start];
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
