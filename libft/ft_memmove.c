/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:50:08 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/10 16:53:49 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (s == d || n == 0)
		return (dest);
	if (d < s)
	{
		while (n > 0)
		{
			*d++ = *s++;
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (dest);
}

// #include <string.h>
// #include <stdio.h>

// int main ()
// {
// 	char src[] = "hello";
// 	char dest[] = "rrrrr";

// 	// memmove(dest + 1, src, 2);
// 	ft_memmove(dest+1, src, 10);
// 	// ft_memmove(dest+1, src, 6);
// 	printf("%s\n", dest);

// 	int src1[] = {1,2,3,4,5};
// 	int dest1[5];

// 	memmove(dest1, src1, sizeof(int)*5);
// 	// ft_memmove(dest1, src1, sizeof(src1));
// 	for (int i = 0; i < 5; i++)
// 		printf("%d\n", dest1[i]);

// 	char src3[] = "hello";
// 	memmove(src3 + 1, src3, 4);
// 	// ft_memmove(src3 + 1, src3, 4);
// 	printf("%s\n", src3);
// }