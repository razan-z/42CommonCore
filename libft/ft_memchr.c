/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 10:20:57 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/13 10:35:26 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	scans the initial n bytes of the memory area
	pointed to by s for the first instance of c.  Both c and the  bytes
	of  the  memory  area  pointed  to by s are interpreted as unsigned
	char.

	memrchr() functions return a pointer to the match‐
	ing  byte or NULL if the character does not occur in the given mem‐
	ory area.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c1;
	unsigned char	*s1;
	size_t			i;

	c1 = (unsigned char)c;
	s1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == c1)
			return (s1 + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%p\n", memchr("Hello", 'l', 5));
// 	printf("%p\n", ft_memchr("Hello", 'l', 5));
// }