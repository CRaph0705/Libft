/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:52:59 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/13 15:34:39 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strchr() function returns a pointer to the first occurrence
//  of the character c in the string s.
char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (*s == '\0')
		return (0);
	while (s[i] && s[i] != c)
	{
		i++;
	}
	if (s[i] != c)
		return (0);
	else
		return ((char *) &s[i]);
}
