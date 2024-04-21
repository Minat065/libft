/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:53:41 by mirokugo          #+#    #+#             */
/*   Updated: 2024/04/21 22:33:20 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	separater(char c, char d)
{
	if (c == d)
		return (1);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		wordlength;

	if (!s)
		return (0);
	result = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!result)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (separater(s[i], c))
			i++;
		wordlength = 0;
		while (s[i + wordlength] && !separater(s[i + wordlength], c))
			wordlength++;
		if (wordlength)
			result[j++] = ft_substr(s, i, wordlength);
		i += wordlength;
	}
	result[j] = 0;
	return (result);
}

/*{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		wordlength;

	if (!s)
		return (0);
	result = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!result)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (separater(s[i], &c))
			i++;
		wordlength = 0;
		while (s[i + wordlength] && !separater(s[i + wordlength], &c))
			wordlength++;
		if (wordlength)
			result[j++] = ft_substr(s, i, wordlength);
		i += wordlength;
	}
	result[j] = 0;
	return (result);
} */

// #include <stdio.h>

// int	main(void)
// {
// 	char *str = "Hello, world! This is a test.";
// 	char *charset = " ,!";
// 	char **result = ft_split(str, charset);
// 	int i = 0;
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	return (0);
// }%
