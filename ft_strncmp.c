/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:19:06 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/11 11:19:39 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
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
