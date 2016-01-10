/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_join.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:55:01 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/21 22:39:27 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_array_join(const char **s, const char *join)
{
	t_count	i;
	size_t	len_array;
	size_t	len_join;
	size_t	len_str;
	char	*str;

	len_array = ft_array_len(s);
	len_join = ft_strlen(join);
	len_str = ft_array_strlen(s) + (len_array - 1) * len_join;
	str = (char *)malloc(sizeof(char) * (len_str + 1));
	i = 0;
	while (i < len_array - 1)
	{
		ft_strcat(str, s[i]);
		ft_strcat(str, join);
		i++;
	}
	ft_strcat(str, s[i]);
	str[len_str] = '\0';
	return (str);
}
