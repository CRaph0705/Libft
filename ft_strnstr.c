/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:09:27 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/11 13:33:33 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(little) > ft_strlen(big) || *big == '\0')
		return (NULL);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && little[j] == big[i + j] && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return (&big[i]);
		i++;
	}
	return (NULL);
}
