/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:23:28 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/10 12:48:34 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	unsigned int	i;

	i = 0;
	str = s;
	while (i < n)
		str[i++] = '\0';
}

// #include <string.h>
// #include <stdio.h>
// int main ()
// {
// 	int t[5] = {1,2,3,4,5};
// 	for (int i = 0; i < 5; i++)
// 		printf("%d\n",t[i]);

// 	// bzero(t, sizeof(t));
// 	ft_bzero(t, sizeof(t));

// 	for (int i = 0; i < 5; i++)
// 		printf("%d\n",t[i]);

// 	int t1[5] = {1,2,3,4,5};
// 	for (int i = 0; i < 5; i++)
// 		printf("%d\n",t1[i]);

// 	// bzero(t1[2], sizeof(t));
// 	ft_bzero(&t1[2], sizeof(t));

// 	for (int i = 0; i < 5; i++)
// 		printf("%d\n",t1[i]);
// }