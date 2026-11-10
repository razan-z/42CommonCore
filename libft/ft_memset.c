/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:53:42 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/10 12:48:06 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned int	i;

	i = 0;
	str = s;
	while (i < n)
		str[i++] = c;
	return (s);
}

// #include <string.h>
// #include <stdio.h>
// int main ()
// {
// 	int t[5];
// 	// memset(t, 300, sizeof(t));
// 	ft_memset(t, 0, sizeof(t));

// 	for (int i = 0; i < 5; i++)
// 		printf("%d\n",t[i]);

// 	char tt[10];
// 	// ft_memset(tt, 'A', 10);
// 	memset(tt, 'A', 10);

// 	printf("%s\n",tt);
// }