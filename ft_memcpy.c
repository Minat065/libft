/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 23:28:08 by mirokugo          #+#    #+#             */
/*   Updated: 2024/04/17 00:03:18 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int	t_size;

void	*ft_memcpy(void *restrict dst, const void *restrict src, t_size n)
{
	unsigned char	*d;
	unsigned char	*s;
	t_size			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char s[10] = "123456789";
	char s2[10] = "123456789";
	printf("ft_memcpy: %s\n", ft_memcpy(s, "abc", 5));
	printf("memcpy: %s\n", memcpy(s2, "abc", 5));
	return (0);
} */