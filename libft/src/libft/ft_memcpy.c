/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:17:37 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/08/15 16:57:52 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Copies n bytes 
 *	from memory area {src} to memory area {dest}.
 *	The memory areas must not overlap!
 *	Returns a pointer to dest.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!(dest) && !(src))
		return (0);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
		*(d++) = *(s++);
	return (dest);
}
