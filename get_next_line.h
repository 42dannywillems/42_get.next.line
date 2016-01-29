/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 20:03:34 by dwillems          #+#    #+#             */
/*   Updated: 2016/01/29 17:44:18 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <unistd.h>

# define BUFF_SIZE 100000

# define GNL_ERROR -1
# define GNL_FINISHED 0
# define GNL_OK 1

# define READ_ERROR -1
# define READ_FINISHED 0

typedef struct		s_file
{
	int				fd;
	char			*red;
	char			*b_red;
}					t_file;

int					get_next_line(int fd, char **line);

#endif
