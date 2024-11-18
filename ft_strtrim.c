/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:58:56 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/18 19:20:25 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set);
static int	is_in_array(char c, char *tab);

static int	is_in_array(char c, char *tab)
{
	int	i;

	i = 0;
	while (tab[i] && c != tab[i])
		i++;
	if (c == tab[i])
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		str_start;
	unsigned int		str_end;
	unsigned int		i;
	size_t				str_len;
	char				*str;

	i = 0;
	str = NULL;
	str_start = 0;
	str_end = (unsigned int) ft_strlen((char *)s1);
	while (s1[i] && is_in_array(s1[i], (char *)set) == 1)
	{
		str_start++;
		i++;
	}
	i = (unsigned int) ft_strlen((char *)s1);
	while (s1[i] && is_in_array(s1[i], (char *)set) == 1)
	{
		str_end--;
		i--;
		
	}
	str_len = (size_t)(str_end - str_start);
	str = ft_substr(s1, str_start, str_len);
	return (str);
}
