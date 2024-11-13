/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:18:45 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/13 15:47:37 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	ptr = NULL;
	if ((nmemb / 2 * size) >= 1073741824 || nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size + 1);
	if (!ptr)
		return (NULL);
	while (nmemb > 0)
	{
		ptr[nmemb] = '\0';
		nmemb--;
	}
	return (ptr);
}
/*
#include<stdio.h>

int	main(void)
{
	void	*buf;
	size_t	nelem;
	size_t	s;
	char	*dest;

	nelem = 1073741824;
	s = 1073741824;
	buf = malloc(s * nelem);
	if (buf == NULL)
	{
		printf("pouet");
	}
	else
	{
		printf("IZOKEY");
	}
	dest = ft_calloc(nelem, s);
	free(buf);
	free(dest);
	return (0);
}*/