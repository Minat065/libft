/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 05:55:00 by mirokugo          #+#    #+#             */
/*   Updated: 2024/05/03 17:17:03 by mirokugo         ###   ########.fr       */
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
			return (INT_MIN);
		if (num * sign > INT_MAX)
			return (INT_MAX);
		num = num * 10 - (*str - '0');
		str++;
	}
	return (sign * num);
}

/* #include <libc.h>
#include <stdio.h>

z
int	main(void)
{
	char *str = "12345";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	str = "12345a";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	str = "a12345";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	str = "12345a12345";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	str = "a12345a";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	str = "a";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	str = "  +++12345";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	str = "  ---12345";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	str = "  -2147483648";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	str = "  -2147483649";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	str = "  2147483647";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	str = "  214748364108";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	str = "9223372036854775808";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	str = "-9223372036854775809";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	str = "9223372036854775807";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	return (0);
} */
