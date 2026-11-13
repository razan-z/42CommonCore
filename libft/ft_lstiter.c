/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 16:38:39 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/12 17:50:37 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>

// static void	ft_print_toupper(void *content)
// {
// 	char	*s;
// 	int		i;

// 	s = (char *)content;
// 	i = 0;
// 	while (s[i])
// 	{
// 		if (s[i] >= 'a' && s[i] <= 'z')
// 			s[i] -= 32;
// 		i++;
// 	}
// 	printf("%s", s);
// }

// int	main(void)
// {
// 	t_list *head, *n1, *n2;
//     char s0[] = "Hi ";
//     char s1[] = "n1 ";
//     char s2[] = "n2 ";

//     head = ft_lstnew(s0);
//     n1 = ft_lstnew(s1);
//     n2 = ft_lstnew(s2);
//     ft_lstadd_back(&head, n1);
//     ft_lstadd_back(&head, n2);
//     ft_lstiter(head, ft_print_toupper);
//     return (0);
// }
