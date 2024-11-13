/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:23:37 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/13 15:47:56 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (src <= dest)
	{
		i = n;
		while (i > 0)
		{
			*(char *)dest-- = *(char *)src--;
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(char *)dest++ = *(char *)src++;
			i++;
		}
	}
	return (dest);
}
