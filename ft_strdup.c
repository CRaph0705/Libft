/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:18:55 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/13 16:19:51 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s);

char	*strdup(const char *s)
{
	int		s_len;
	int		i;
	char	*dest;

	dest = NULL;
	i = 0;
	if (s[i] != '\0')
		return (NULL);
	while (s[i])
		i++;
	s_len = i;
	dest = malloc(s_len * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	i = 0;
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
