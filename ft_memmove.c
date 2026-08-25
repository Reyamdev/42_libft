/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reyam <reyam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 19:15:55 by reyam             #+#    #+#             */
/*   Updated: 2026/08/25 16:07:56 by reyam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memmove() function copies len bytes from string src to string dst.
// The two strings may overlap; the copy is always done in a non-destructive manner.

// The safeguard for that is entirely about choosing a copy direction that won’t destroy source bytes before they’ve been read.
// to achieve that,	d < s compares the addresses stored in the two pointers, not the bytes they point to.
// like is address 0x1004 before address 0x1000?
// if dest is before source then

// to sum up:
// copy forward if dest is before src; otherwise copy backward.
// this prevents overlapping memory from overwriting bytes before they are copied.

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (len > 0)
		{
			*d = *s;
			d++;
			s++;
			len--;
		}
	}
	else
	{
		d += len;
		s += len;
		while (len > 0)
		{
			d--;
			s--;
			*d = *s;
			len--;
		}
	}
	return (dest);
}
