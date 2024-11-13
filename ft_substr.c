/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:25:53 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/13 16:31:56 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	sub = NULL;
	if (!s || !start || len == 0)
		return (sub);
	i = ft_strlen((char *)s);
	if (start > i)
		return (sub);
	if (i - start < (unsigned int) len)
		sub = malloc((size_t)(i - start) * sizeof(char) + 1);
	else
		sub = malloc(len * sizeof(char) + 1);
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
