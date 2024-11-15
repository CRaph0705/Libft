/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:23:10 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/14 18:37:19 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_split(char const *s, char c);
static size_t	get_word_count(const char *str, char separator);
static	size_t	get_word_length(const char *str, char separator);

static	size_t	get_word_count(const char *str, char separator)
{
	size_t	word_count;

	word_count = 0;
	if (!str)
		return (0);
	while (*str)
	{
		while (*str == separator)
			str++;
		if (*str)
			word_count++;
		while (*str != separator && *str)
			str++;
	}
	return (word_count);
}

static	size_t	get_word_length(const char *str, char separator)
{
	size_t	len;

	if (ft_strchr(str, separator) == 0)
		len = ft_strlen((char *)str);
	else
		len = ft_strchr(str, separator) - str;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	word_len;
	int		i;

	i = 0;
	tab = malloc((1 + get_word_count(s, c)) * sizeof(char *));
	if (!tab || !s || get_word_count(s, c) == 0)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			word_len = get_word_length(s, c);
			tab[i] = ft_substr(s, 0, word_len);
			if (tab[i] == NULL)
				return (NULL);
			i++;
			s += word_len;
			printf("line 71 : s ='%s'\n", s);
		}
	}
	tab[i] = NULL;
	return (tab);
}

/* int	main(int ac, char **av)
{
	char	**tab;
	int		i;

	i = 0;
	(void) ac;
	tab = ft_split((char const *)av[1], av[2][0]);
	if (!tab)
	{
		printf("oh oh pas de tableau");
		return (0);
	}
	while (tab[i])
	{
		printf("line 93 : i = %d; tab[i] : %s\n", i, tab[i]);
		i++;
	}
} */

/*int	main(int ac, char **av)
{
	char	**tab;
	int		i;

	i = 0;
	(void) ac;
	tab = ft_split((char const *)av[1], av[2][0]);
	if (!tab)
	{
		printf("oh oh pas de tableau");
		return (0);
	}
	while (*tab)
	{
		printf("line 93 : i = %d; tab[i] : %s\n", i, *tab);
		tab++;
	}
	i = 0;
	// while (tab + i)
	// {
	// 	free(tab + i);
	// 	i++;
	// }
	// free(tab);
	return (0);
}*/
