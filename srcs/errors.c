/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 08:07:06 by hloki             #+#    #+#             */
/*   Updated: 2021/09/08 08:07:13 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	error(int ID)
{
	if (ID == 1)
	{
		write(1, "Error: Invalid map.\n", 20);
		exit(-1);
	}
	else if (ID == 2)
	{
		write(1, "Error: Cannot read file\n", 24);
		exit(-1);
	}
	else if (ID == 3)
	{
		write(1, "Error: Cannot open file\n", 24);
		exit(-1);
	}
}
