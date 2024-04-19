/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 04:54:16 by mirokugo          #+#    #+#             */
/*   Updated: 2024/04/19 08:52:00 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	dst_len = 0;
	if (dst)
		dst_len = ft_strlen(dst);
	i = 0;
	j = 0;
	while (i < dstsize && dst[i])
		i++;
	if (i + src_len > dstsize)
		return (i + src_len);
	while (src[j] && i + j < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst_len + src_len);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

"thx to ntoniolo for this test !", 4
the cake is a lie !\0I'm hidden lol\r\n
"
int	main(void)
{
	char	dst[20] = "Hello, ";
	char	*src;
	size_t	dstsize;
	size_t	ret;
	char	ft_dst[20] = "Hello, ";
	char	*ft_src;
	size_t	ft_dstsize;
	size_t	ft_ret;

	src = "World!";
	dstsize = 20;
	ret = strlcat(dst, src, dstsize);
	printf("strlcat: %s\n", dst);
	printf("return: %zu\n", ret);
	ft_src = "World!";
	ft_dstsize = 20;
	ft_ret = ft_strlcat(ft_dst, ft_src, ft_dstsize);
	printf("ft_strlcat: %s\n", ft_dst);
	printf("return: %zu\n", ft_ret);
	ret = strlcat(dst, src, 0);
	printf("strlcat: %s\n", dst);
	printf("return: %zu\n", ret);
	ft_ret = ft_strlcat(ft_dst, ft_src, 0);
	printf("ft_strlcat: %s\n", ft_dst);
	printf("return: %zu\n", ft_ret);
	ret = strlcat(dst, src, 5);
	printf("strlcat: %s\n", dst);
	printf("return: %zu\n", ret);
	ft_ret = ft_strlcat(ft_dst, ft_src, 5);
	printf("ft_strlcat: %s\n", ft_dst);
	printf("return: %zu\n", ft_ret);
	return (0);
} */
