/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:11:07 by aburnott          #+#    #+#             */
/*   Updated: 2022/10/07 16:45:58 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trim;

	if (!s1)
		return (0);
	if (!set)
		ft_strdup(s1);
	while (!check_set(s1[i], set))
		i++;
	start = i;
	while (check_set(s1[i], set))
		i++;
	end = i;
	trim = ft_substr(s1, start, end - start);
	return (trim);
}
