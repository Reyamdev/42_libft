/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reyam <reyam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 03:40:19 by reyam             #+#    #+#             */
/*   Updated: 2026/08/27 19:54:36 by reyam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  The strchr() function locates the first occurrence of c (
// converted to a char) in the string pointed to by s.
// The terminating null character is considered part of the string;
// therefore if c is ‘\0’, the functions locate the terminating ‘\0’.

#include "libft.h"

char	*strchr(const char *s, int c)
{
	while (1)
	{
		if (*s == (char)c)
			return ((char *)s);
		if (*s == '\0')
			return (NULL);
		s++;
	}
}
