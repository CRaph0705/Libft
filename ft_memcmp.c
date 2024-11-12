/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:23:30 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/12 12:01:31 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	diff;

	diff = 0;
	if (n == 0)
		return (diff);
	while (n > 0 && *(char *)s1 == *(char *)s2)
	{
		n--;
	}
	diff = *(char *)s1 - *(char *)s2;
	return (diff);
}
