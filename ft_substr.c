/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:38:06 by vfiszbin          #+#    #+#             */
/*   Updated: 2021/12/06 20:34:47 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret_str;
	size_t	i;

	ret_str = malloc(sizeof(char) * (len + 1));
	if (!ret_str || !s)
		return (NULL);
	i = 0;
	while (i < len && start < len)
	{
		ret_str[i] = s[i + start];
		i++;
	}
	ret_str[i] = '\0';
	return (ret_str);
}
