/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 05:55:00 by mirokugo          #+#    #+#             */
/*   Updated: 2024/04/19 06:32:07 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nb;
	int	sign;

	nb = 0;
	sign = -1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = 1;
		else
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 - (*str - '0');
		str++;
	}
	return (nb * sign);
}

/* #include <libc.h>
#include <stdio.h>

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

	return (0);
} */