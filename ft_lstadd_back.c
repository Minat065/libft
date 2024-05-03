/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:34:03 by mirokugo          #+#    #+#             */
/*   Updated: 2024/05/03 14:51:26 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (*lst)
		*lst = (*lst)->next;
	*lst = new;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
// 	t_list *lst = malloc(sizeof(t_list));
// 	t_list *new = malloc(sizeof(t_list));
// 	lst->content = "lst";
// 	lst->next = NULL;
// 	new->content = "new";
// 	new->next = NULL;
// 	ft_lstadd_back(&lst, new);
// 	printf("lst->content: %s\n", (char *)lst->content);
// 	printf("lst->next->content: %s\n", (char *)lst->next->content);
// 	free(lst);
// 	free(new);
// 	return (0);
// }