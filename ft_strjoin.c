/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:28:55 by aburnott          #+#    #+#             */
/*   Updated: 2022/10/06 17:44:56 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	//size_t	i;
	size_t	j;
	size_t	s1_len;
	size_t	s2_len;
	char	*join;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join = malloc(sizeof(*join) * (s1_len + s2_len) + 1);
	if (!join)
		return (0);
	join = (char *)s1;
	j = 0;
	while (s2[j])
	{
		join[s1_len + j] = s2[j];
		j++;
	}
	join[s1_len + j] = '\0';
	return (join);
}
