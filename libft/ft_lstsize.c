/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:05:19 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/12 15:10:57 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list *lst, *new,*new1;

// 	lst = ft_lstnew("world");
// 	new = ft_lstnew("Hello");
// 	ft_lstadd_front(&lst, new);
// 	new1 = ft_lstnew("Yall");
// 	ft_lstadd_front(&lst, new1);

// 	printf("%d", ft_lstsize(lst));
// }