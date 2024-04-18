/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:01:09 by mirokugo          #+#    #+#             */
/*   Updated: 2024/04/19 03:30:57 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	return (c);
}
//
//#include <ctype.h>
//#include <stdio.h>
//
// int	main(void)
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
