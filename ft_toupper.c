/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:01:09 by mirokugo          #+#    #+#             */
/*   Updated: 2024/04/16 20:09:21 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(char c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
}
//
//#include <ctype.h>
//#include <stdio.h>
//
//int	main(void)
//{
//	int i = 0;
//
//	while (i < 128)
//	{
//		printf("ft_toupper: %d  ", ft_toupper(i));
//		printf("   toupper: %d\n", toupper(i));
//		printf("\n");
//		i++;
//	}
//}
