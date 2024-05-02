/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:02:54 by mirokugo          #+#    #+#             */
/*   Updated: 2024/05/02 21:56:35 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}

/* #include <stdio.h>

int	main(void)
{
	t_list	*list;

	list = ft_lstnew("Hello, world!");
	printf("%s\n", (char *)list->content);
	list = ft_lstnew("goodbye, world!");
	printf("%s\n", (char *)list->content);
	return (0);
} */
