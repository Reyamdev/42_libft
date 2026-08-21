/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reyam <reyam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 19:15:55 by reyam             #+#    #+#             */
/*   Updated: 2026/08/21 05:06:55 by reyam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.

#include "libft.h"

void *ft_memset(void *str, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	x;
	size_t			i;

	p = (unsigned char *)str;
	x = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		p[i] = x;
		i++;
	}
	return (str);
}
