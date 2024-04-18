/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 06:22:36 by mirokugo          #+#    #+#             */
/*   Updated: 2024/04/19 06:44:30 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/* #include <libc.h>
#include <stdio.h>

int	main(void)
{
	int *ptr;
	int *ptr2;

	ptr = (int *)calloc(5, sizeof(int));
	ptr2 = (int *)ft_calloc(5, sizeof(int));
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", ptr[i]);
		printf("%d\n", ptr2[i]);
	}
	free(ptr);
	free(ptr2);

	return (0);
} */