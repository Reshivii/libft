/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:32:55 by aburnott          #+#    #+#             */
/*   Updated: 2022/10/05 22:09:31 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_elm, size_t size)
{	
	void	*ptr;

	if (n_elm == 0 || size == 0)
		return (NULL);
	ptr = malloc(n_elm * size);
	return (ptr);
}
