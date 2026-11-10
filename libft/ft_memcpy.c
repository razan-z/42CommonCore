/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:01:30 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/10 16:09:41 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*d;
	const char		*s;
	unsigned int	i;

	i = 0;
	d = dest;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

// #include <string.h>
// #include <stdio.h>

// int main ()
// {
	// char src[] = "hello";
	// char dest[] = "rrrrrrrrrr";

	// // memcpy(dest + 1, src, 10);
	// ft_memcpy(dest+1, src, 10);
	// // ft_memcpy(dest+1, src, 6);
	// printf("%s\n", dest);

	// int src1[] = {1,2,3,4,5};
	// int dest1[5];

	// memcpy(dest1, src1, sizeof(int)*5);
	// // ft_memcpy(dest1, src1, sizeof(src1));
	// for (int i = 0; i < 5; i++)
	// 	printf("%d\n", dest1[i]);
// }