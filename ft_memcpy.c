/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reyam <reyam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 19:15:55 by reyam             #+#    #+#             */
/*   Updated: 2026/09/01 23:39:27 by reyam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior
//  is undefined. Applications in which dst and src might overlap should use memmove(3) instead.

// both dst and src are restrict pointers.
// That means memcpy assumes the memory regions they point to do not overlap.
// you are essentially promising:
// “These pointers are being used to access separate memory for this operation.”
// So the compiler can make assumptions that may allow faster code.

//convert both void * pointers into byte-addressable pointers before indexing them.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t			i;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
