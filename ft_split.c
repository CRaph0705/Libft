/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:23:10 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/13 18:05:22 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		n;
	int		count_words;
	char	**tab;

	i = 0;
	j = 0;
	k = 0;
	n = 0;
	count_words = 0;
	tab = NULL;
	while (s[i])
	{
		if (s[i] != c)
		{	
			while (s[i + j] != c)
				j++;
			tab[k] = malloc((size_t) j * sizeof(char) + 1);
			if (!tab[k])
				return (NULL);
			while (j > 0)
			{
				tab[k][n] = s[i];
				i++;
				j--;
				n++;
			}
			tab[k][n] = '\0';
			n = 0;
			k++;
		}
		i++;
		j = 0;
	}
	return (tab);
}

int	main(int ac, char **av)
{
	char	**tab;
	int		i;

	i = 0;
	tab = NULL;
	(void) ac;
	tab = ft_split(av[1], *av[2]);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}