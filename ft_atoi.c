/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 05:55:00 by mirokugo          #+#    #+#             */
/*   Updated: 2024/05/07 11:33:25 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	num;

	sign = -1;
	num = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if (num * sign < INT_MIN)
			return (0);
		if (num * sign > INT_MAX)
			return (-1);
		num = num * 10 - (*str - '0');
		str++;
	}
	return (sign * num);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "2147483647";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	str = "-2147483648";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	str = "2147483647";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	str = "-1";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	str = "0";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	str = "42tokyo";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	str = "tokyo42";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	str = "000042";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	str = "  -42";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	str = "123456789012345678901234567890";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	str = "-123456789012345678901234567890";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	return (0);
// }
