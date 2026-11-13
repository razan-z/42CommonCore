/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:59:33 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/13 15:27:20 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// void	del_content(void *content)
// {
// 	free(content);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	t_list *lst = ft_lstnew("Hello");
//     ft_lstdelone(lst, del_content);
// }