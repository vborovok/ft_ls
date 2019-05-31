/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmasha-h <fmasha-h@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:02:19 by fmasha-h          #+#    #+#             */
/*   Updated: 2019/05/27 11:40:36 by fmasha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

int		add_flags(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] != '-')
		return (-1);
	while (argv[i] != '\0')
	{
		if (argv[i] == 'a')
			PUT_BIT(g_flags, 0);
		else if (argv[i] == 'r')
			PUT_BIT(g_flags, 1);
		else if (argv[i] == 't')
			PUT_BIT(g_flags, 2);
		else if (argv[i] == 'l')
			PUT_BIT(g_flags, 3);
		else if (argv[i] == 'R')
			PUT_BIT(g_flags, 4);
		i++;
	}
	if (g_flags == 0)
		return (0);
	else
		return (1);
}
