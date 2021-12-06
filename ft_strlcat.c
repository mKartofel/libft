/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:12:03 by vfiszbin          #+#    #+#             */
/*   Updated: 2021/12/06 20:13:23 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dstsize == 0)
		return (src_len);
	dst_len = 0;
	while (dst[dst_len])
		dst_len++;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	while (dstsize && (dstsize - dst_len) && src[i]
		&& dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}

/*
#include<stdio.h>
int		main()
{
	char	*dest;
	
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	memset(dest, 'r', 15);
	printf("dest : %s\n", dest);
	printf("src : %s\n", "lorem ipsum dolor sit amet");
	printf("%zu\n",(ft_strlcat(dest, "lorem ipsum dolor sit amet", 5)));
	write(1, "\n", 1);
	write(1, dest, 15);
}
*/