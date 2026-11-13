/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 10:12:40 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/13 15:42:55 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] != '\0' && s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
// #include <string.h>
// #include <stdio.h>
// int main ()
// {
// 	char *s1 = "abc", *s2 = "aba";

// 	printf("%d\n", ft_strncmp(s1, s2, 3));
// 	printf("%d\n", strncmp(s1, s2, 3));

// }