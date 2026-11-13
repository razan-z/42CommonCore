/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:20:21 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/13 15:35:41 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// static void	ft_print_next_char(unsigned int i, char *s)
// {
// 	printf("%c", s[i] + 1);
// }

// int	main(void)
// {
// 	ft_striteri("abc0", ft_print_next_char);
// }