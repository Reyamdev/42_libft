/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reyam <reyam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 19:15:55 by reyam             #+#    #+#             */
/*   Updated: 2026/09/01 23:16:46 by reyam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  The isprint() function tests for any printing character,
// including space (‘ ’).  The value of the argument must
//  be representable as an unsigned char or the value of EOF.

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
