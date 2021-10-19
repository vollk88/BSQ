/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_download.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 20:50:11 by tcristin          #+#    #+#             */
/*   Updated: 2021/09/07 12:15:09 by tcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**map_download(int fd, struct s_val *values)
{
	char	**arr;
	int		i;

	i = 0;
	arr = (char **)malloc(sizeof(char *) * values->str_num);
	while (i < values->str_num)
	{
		arr[i] = (char *)malloc(sizeof(char) * (values->str_len + 1));
		rd = read(fd, arr[i], values->str_len + 1);
		i++;
	}
	close (fd);
	return (arr);
}
