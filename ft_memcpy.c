/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:23:33 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/11 18:22:39 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = n;
	if (dest && src)
	{
		while (n > 0)
		{
			*(char *)dest++ = *(char *)src++;
			n--;
			i++;
		}
		return ((void *) dest - i);
	}
	return (NULL);
}
