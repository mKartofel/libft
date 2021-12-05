/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 18:38:53 by vfiszbin          #+#    #+#             */
/*   Updated: 2021/12/05 18:55:07 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	prev_i;

	if (ft_strlen(little) == 0)
		return ((char *)big);
	i = -1;
	while (++i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			prev_i = i;
			j = -1;
			while (++j + i < len && little[j] != '\0')
			{
				if (big[i] != little[j])
					break ;
				if (little[j + 1] == '\0')
					return ((char *)&big[i - j]);
				i++;
			}
			i = prev_i;
		}
	}
	return (NULL);
}
