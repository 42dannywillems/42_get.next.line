/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:06:53 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/20 13:34:51 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	t_count	i;
	t_count	beg;
	t_count end;
	t_bool	read;

	ISNULL(s);
	i = 0;
	while (s[i] && ft_isblankspace(s[i]))
		i++;
	beg = i;
	end = i;
	while (s[i])
	{
		read = FALSE;
		while (s[i] && ft_isblankspace(s[i]))
			i++;
		while (s[i] && !ft_isblankspace(s[i]))
		{
			i++;
			read = TRUE;
		}
		if (read)
			end = i;
	}
	return (ft_strsub(s, beg, end - beg));
}
