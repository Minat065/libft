/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 00:04:22 by mirokugo          #+#    #+#             */
/*   Updated: 2024/04/17 03:35:32 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int	t_size;

void	*ft_memmove(void *dst, const void *src, t_size len)
{
	unsigned char		*d;
	const unsigned char	*s;
	t_size				i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	if (dst == src || len == 0)
		return (dst);
	if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[10] = "123456789";
	char	s2[10] = "123456789";
	printf("ft_memmove: %s\n", ft_memmove(s + 2, s, 8));
	printf("memmove: %s\n", memmove(s2 + 2, s2, 8));
	return (0);
} */
