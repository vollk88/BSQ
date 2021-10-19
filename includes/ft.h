/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 21:03:00 by hloki             #+#    #+#             */
/*   Updated: 2021/09/07 13:51:14 by tcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	error(int ID);

struct s_val
{
	char		*filename;
	int			fd;
	int			rs;
	char		a;
	int			str_len;
	char		stone;
	char		empty;
	char		full;
	int			str_val;
	short int	**array;
	char		*map;
	char		*params;
	short int	**sub;
	short int	max;
	int			max_i;
	int			max_j;
};

#endif
