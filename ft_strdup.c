/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:18:55 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/18 19:37:41 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s);

char	*ft_strdup(const char *s)
{
	int		s_len;
	int		i;
	char	*dest;

	dest = 0;
	i = 0;
	s_len = ft_strlen(s);
	dest = ft_calloc(s_len + 1, sizeof(char));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include<stdio.h>
int	main(int ac, char **av)
{
	char	*cpy;
	if (ac < 2)
		return (0);
	cpy = ft_strdup(av[1]);
	printf("la copie de %s est %s", av[1], cpy);
	free(cpy);	
	return (0);
}*/
