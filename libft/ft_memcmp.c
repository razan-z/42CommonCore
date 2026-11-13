/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 10:47:51 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/11 11:23:09 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The  memcmp() function compares the first n bytes (each interpreted
	as unsigned char) of the memory areas s1 and s2.

	The memcmp() function returns an integer less than,  equal  to,  or
	greater  than  zero  if  the  first n bytes of s1 is found, respec‐
	tively, to be less than, to match, or be greater than the  first  n
	bytes of s2.

	For  a  nonzero return value, the sign is determined by the sign of
	the difference between the first pair of bytes (interpreted as  un‐
	signed char) that differ in s1 and s2.

	If n is zero, the return value is zero.
*/

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;

	ss1 = s1;
	ss2 = s2;
	while (n > 0)
	{
		if (*ss1 == *ss2)
		{
			ss1++;
			ss2++;
			n--;
		}
		else
			return (*ss1 - *ss2);
	}
	return (0);
}

// #include<stdio.h>
// int main ()
// {
// 	printf("%d\n", ft_memcmp("Hel\0lo", "Hel\0lo", 5));
// 	printf("%d\n", memcmp("Hel\0lo", "Hel\0lo", 5));
// }