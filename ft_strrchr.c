/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reyam <reyam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 04:17:42 by reyam             #+#    #+#             */
/*   Updated: 2026/08/21 05:39:07 by reyam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//same as strchr, except this only locates last instance of c.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (1)
	{
		if (*s == (char)c)
			last = s;
		if (*s == '\0')
			break ;
		s++;
	}
	return ((char *)last);
}
