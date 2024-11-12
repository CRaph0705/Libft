/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:22:38 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/12 14:15:28 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
// size_t			strlcat(char *dst, const char *src, size_t siz);
/* size_t strlcat (char * dst, const char * src, size_t siz)
		Concatenate two strings. Appends src to string dst of size siz (unlike
		strncat(), siz is the full size of dst, not space left). At most siz-1
		characters will be copied. Always NULL terminates (unless siz <=
		strlen(dst)).

		Returns
			The strlcat() function returns strlen(src) + MIN(siz,
			strlen(initial dst)). If retval >= siz, truncation occurred.

		Appends src to string dst of size siz (unlike strncat(), siz is the
		full size of dst, not space left). At most siz-1 characters will be
		copied. Always NULL terminates (unless siz <= strlen(dst)).

		Returns
			The strlcat() function returns strlen(src) + MIN(siz,
			strlen(initial dst)). If retval >= siz, truncation occurred.
 */
// TODO:
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_strlen(char *str);

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str(i))
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	retval;

	i = ft_strlen(dest);
	j = 0;
	if (size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	while (src[j] && (i + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (ft_strlen(src) + ft_strlen(dest));
}
