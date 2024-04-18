/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 04:54:16 by mirokugo          #+#    #+#             */
/*   Updated: 2024/04/19 02:29:13 by mirokugo         ###   ########.fr       */
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
	dst_len = ft_strlen(dst);
	i = 0;
	j = 0;
	if (dstsize == 0)
		return (src_len);
	while (dst[i] && i < dstsize)
		i++;
	if (i == dstsize)
		return (dst_len + src_len);
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

int	main(void)
{
	char	dst2[100] = "Hello";
	char	src2[] = "World";
	size_t	dstsize;
	size_t	dstsize2;
	size_t	ret;
	size_t	ret2;
	char	*src3;
	char	*src4;
	char	src3;
char	src[] = "World";
char	src4;
char	dst[100] = "Hello";

dstsize = 100;
dstsize2 = 100;
ret = ft_strlcat(dst, src, dstsize);
ret2 = strlcat(dst2, src2, dstsize2);
printf("dst: %s\n", dst);
printf("ret: %zu\n", ret);
printf("dst2: %s\n", dst2);
printf("ret2: %zu\n", ret2);
src3 = calloc(100, sizeof(char));
src4 = calloc(100, sizeof(char));
for (int i = 0; i < 99; i++)
{
	src3[i] = i + 1;
	src4[i] = i + 1;
}
return (0);
}*/
