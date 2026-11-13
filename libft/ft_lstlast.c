/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:25:24 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/12 15:11:14 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list *lst, *new, *ret;

// 	lst = ft_lstnew("world");
// 	new = ft_lstnew("Hello");

// 	ft_lstadd_front(&lst, new);

//     ret = ft_lstlast(lst);
// 	printf("%s", (char *)ret->content);
// }