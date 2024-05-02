/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 21:33:04 by mirokugo          #+#    #+#             */
/*   Updated: 2024/05/02 16:54:02 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*c;
	int		i;

	if (!*s || !f)
		return (NULL);
	c = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!c)
		return (NULL);
	i = 0;
	while (s[i])
	{
		c[i] = f(i, s[i]);
		i++;
	}
	c[i] = '\0';
	return (c);
}

/* #include <stdio.h>

int	main(void)
{
	char	*s;
	char	*c;

	s = "hello";
	c = ft_strmapi(s, function);
	printf("%s\n", c);
	return (0);
} */
