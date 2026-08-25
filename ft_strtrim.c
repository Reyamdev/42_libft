/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reyam <reyam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 18:11:13 by reyam             #+#    #+#             */
/*   Updated: 2026/08/25 19:28:36 by reyam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns a new string with characters from `set` trimmed
// from the beginning and end of `s1`.

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		length;
	size_t		i;
	char		*trimstr;

	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set,s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	length = end - start;
	trimstr = malloc(sizeof(char) * (length + 1));
	if (!trimstr)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trimstr[i] = s1[start];
		start++;
		i++;
	}
	trimstr[i] = '\0';
	return (trimstr);
}
