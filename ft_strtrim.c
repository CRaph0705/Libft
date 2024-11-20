/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:58:56 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/20 14:57:12 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set);
static int	is_in_array(char c, char *tab);

static int	is_in_array(char c, char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (tab[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	str_start;
	unsigned int	str_end;
	size_t			str_len;
	char			*str;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	str_start = 0;
	while (s1[str_start] && is_in_array(s1[str_start], (char *)set) == 1)
		str_start++;
	str_end = (unsigned int)ft_strlen((char *)s1) - 1;
	while (*s1 && str_end > str_start
		&& is_in_array(s1[str_end], (char *)set) == 1)
		str_end--;
	str_len = (size_t)(str_end - str_start) + 1;
	str = ft_substr(s1, str_start, str_len);
	return (str);
}

/* int	main(int ac, char **av)
{
	(void)ac;
	printf("res : %s", ft_strtrim(av[1], av[2]));
	return (0);
} */