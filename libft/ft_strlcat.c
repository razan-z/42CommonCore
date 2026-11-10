/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:50:54 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/10 18:35:32 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	sum;
	unsigned int	i;

	sum = 0;
	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size > dest_len)
		sum = src_len + dest_len;
	else
		sum = src_len + size;
	while (src[i] != '\0' && size > (dest_len + 1))
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (sum);
}

#include <stdio.h>

// size_t strlcat(char *dst, const char *src, size_t siz);
int	main(void)
{
	char src[] = "Hello";
	char dest[] = "Hi";
	printf("%d\n", strlcat(dest, src, 2));
	// printf("%lu\n", ft_strlcat(dest, src, 2));
	printf("%s\n", dest);
	return (0);
}