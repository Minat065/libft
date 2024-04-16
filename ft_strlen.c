/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:16:09 by mirokugo          #+#    #+#             */
/*   Updated: 2024/04/16 21:20:01 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* #include <libc.h>
#include <stdio.h>

int	main(void)
{
	char *s = "";
	printf("ft_strlen: %d\n", ft_strlen(s));
	printf("strlen: %lu\n", strlen(s));
	return (0);
} */