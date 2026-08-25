/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reyam <reyam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 05:14:29 by reyam             #+#    #+#             */
/*   Updated: 2026/08/25 16:13:51 by reyam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Compares the first n bytes of two memory areas.

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*bytes1;
	const unsigned char	*bytes2;
	size_t				i;

	bytes1 = (const unsigned char *)s1;
	bytes2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (bytes1[i] != bytes2[i])
			return (bytes1[i] - bytes2[i]);
		i++;
	}
	return (0);
}
