/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:14:18 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/12 16:10:45 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}

// void	del_content(void *content)
// {
// 	free(content);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new;
// 	t_list	*new1;

// 	lst = ft_lstnew(ft_strdup("world"));
// 	new = ft_lstnew(ft_strdup("Hello"));
// 	new1 = ft_lstnew(ft_strdup("Hello2"));
// 	ft_lstadd_front(&lst, new);
// 	ft_lstadd_front(&lst, new1);
// 	printf("before: %p\n", (void *)lst);
// 	ft_lstclear(&lst, del_content);
// 	printf("after:  %p\n", lst);
// 	return (0);
// }