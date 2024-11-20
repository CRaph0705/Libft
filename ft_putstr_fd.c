/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:46:14 by rcochran          #+#    #+#             */
/*   Updated: 2024/11/20 20:32:27 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd);

void	ft_putstr_fd(char *s, int fd)
{
	if (fd == -1)
		return ;
	if (s)
		write(fd, s, ft_strlen(s));
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	ft_putstr_fd(av[1], atoi(av[2]));
	return (0);
}
 */