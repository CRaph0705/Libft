/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:23:54 by rcochran          #+#    #+#             */
/*   Updated: 2025/01/31 16:09:46 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int ac, char **av)
{
	if (ac < 3)
		return (0);
	ft_printf("nbr : %s\nbase_from : %s\nbase_to : %s\nnew_num : %s",
		av[1], av[2], av[3], ft_convert_base(av[1], av[2], av[3]));
	return (0);
}
