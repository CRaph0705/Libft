/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:23:25 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/13 15:47:45 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

// scansn bytes of the memory area pointed to by s for the first instance of c
void	*ft_memchr(const void *s, int c, size_t n)
{
	if (s && n)
	{
		while (n > 0)
		{
			if (*(char *)s++ == (unsigned char)c)
				return ((void *)s - 1);
			n--;
		}
	}
	return (NULL);
}
/*
#include<stdio.h>

int	main (void)
{
	const char	str[] = "qwertyuiop";
	const char	ch = 'u';
	char		*ret;

	ret = ft_memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}*/