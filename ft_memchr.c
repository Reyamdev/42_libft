/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reyam <reyam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 05:01:21 by reyam             #+#    #+#             */
/*   Updated: 2026/09/01 23:27:21 by reyam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Searches the first n bytes of memory for the byte c.

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*bytes;
	size_t				i;

	bytes = s;
	i = 0;
	while (i < n)
	{
		if (bytes[i] == (unsigned char)c)
		{
			return ((void *)&bytes[i]);
		}
		i++;
	}
	return (NULL);
}
