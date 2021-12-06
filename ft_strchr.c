/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:43:52 by vfiszbin          #+#    #+#             */
/*   Updated: 2021/12/06 20:40:17 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ps;

	ps = (char *)s;
	i = 0;
	while (ps[i])
	{
		if (ps[i] == c)
			return (&ps[i]);
		i++;
	}
	if (c == '\0')
		return (&ps[i]);
	return (NULL);
}
