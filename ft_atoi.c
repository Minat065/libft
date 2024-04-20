/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 05:55:00 by mirokugo          #+#    #+#             */
/*   Updated: 2024/04/20 12:44:41 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	digicheck(long long nb, int sign)
{
	nb = nb * sign;
	if (nb == (long long)INT_MAX + 1)
		return (INT_MIN);
	if (nb == (long long)INT_MIN - 1)
		return (INT_MAX);
	if (nb > INT_MAX && nb < UINT_MAX)
		return (nb - 4294967296);
	if (nb > INT_MAX && nb < 9223372036854775807)
		return (nb - 4294967296);
	if (nb > LONG_MAX)
		return (-1);
	if (nb < INT_MIN && nb > -9223372036854775807)
		return (nb + 4294967296);
	if (nb < LONG_MIN)
		return (nb);
	return (nb);
}

int	ft_atoi(const char *str)
{
	long long	nb;
	int			sign;

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
		if (nb < LONG_MIN / 10 || (nb == LONG_MIN / 10 && (*str - '0') > 8))
			return (-1);
		if (nb > LONG_MAX / 10 || (nb == LONG_MAX / 10 && (*str - '0') > 7))
			return (-1);
		nb = nb * 10 - (*str - '0');
		str++;
	}
	if (nb == LONG_MIN && sign == -1)
		return (-1);
	nb = digicheck(nb, sign);
	return (nb);
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