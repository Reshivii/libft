/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:32:55 by aburnott          #+#    #+#             */
/*   Updated: 2022/10/06 14:47:44 by aburnott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_elm, size_t size)
{	
	void	*ptr;

	ptr = malloc(n_elm * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n_elm);
	return (ptr);
}
