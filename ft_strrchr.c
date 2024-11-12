/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:54:01 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/11 13:07:21 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) -1;
	if (*s == '\0')
		return (0);
	while (i > 0 && s[i] != c)
	{
		i--;
	}
	if (s[i] != c)
		return (0);
	else
		return ((char *) &s[i]);
}
