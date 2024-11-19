/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:25:53 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/19 10:31:17 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	sub = NULL;
	if (!s || len == 0)
		return (ft_strdup(""));
	i = ft_strlen((char *)s);
	if (start > i)
		return (ft_strdup(""));
	if (i - start < (unsigned int) len)
		sub = malloc((size_t)((i - start) + 1) * sizeof(char));
	else
		sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start + i] && i < (unsigned int) len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/* int	main(int ac, char **av)
{
	char	*sub;

	(void)ac;
	sub = ft_substr(av[1], (unsigned int)atoi(av[2]), (size_t)atoi(av[3]));
	printf("substr de '%s' est '%s'", av[1], sub);
	free(sub);
	return (0);
} */