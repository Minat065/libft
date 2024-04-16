/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:36:33 by mirokugo          #+#    #+#             */
/*   Updated: 2024/04/16 21:14:04 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}

//#include <stdio.h>
//#include <ctype.h>
//
// int	main(void)
//{
//	int i = 0;
//	while (i < 256)
//	{
//		if (isalpha(i) != ft_isalpha(i))
//			printf("error: %d\n", i);
//		i++;
//	}
//	printf("done\n");
//	return (0);
//}
