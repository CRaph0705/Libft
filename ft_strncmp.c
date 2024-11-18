/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:19:06 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/18 11:33:11 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int					diff;
	unsigned int		i;

	i = 0;
	diff = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && (s1[i] - s2[i] == 0) && s1[i])
	{
		i++;
	}
	diff = s1[i] - s2[i];
	return (diff);
}
