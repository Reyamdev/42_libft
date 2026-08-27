/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reyam <reyam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 17:36:47 by reyam             #+#    #+#             */
/*   Updated: 2026/08/27 18:44:53 by reyam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_len(long num)
{
	size_t	len;

	len = 0;
	if (num == 0)
		len = 1;
	if (num < 0)
	{
		len++;
		num *= -1;
	}
	while (num > 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

static void	add_number(size_t *len, char *itoa, long *num)
{
	(*len)--;
	itoa[*len] = (*num % 10) + '0';
	(*num) /= 10;
}

// Converts an integer to a newly allocated string.
// Counts the required size, then fills digits from right to left.
char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*itoa;

	num = n;
	len = num_len(num);
	itoa = malloc(sizeof(char) * (len + 1));
	if (!itoa)
		return (NULL);
	itoa[len] = '\0';
	if (num < 0)
	{
		itoa[0] = '-';
		num *= -1;
		while (len > 1)
			add_number(&len, itoa, &num);
	}
	else
	{
		while (len > 0)
			add_number(&len, itoa, &num);
	}
	return (itoa);
}
