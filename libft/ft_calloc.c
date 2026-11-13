/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:48:35 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/13 14:29:13 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The calloc() function allocates memory for an array of nmemb elements of
	size bytes each and returns a pointer to the allocated memory.
	The memory is set to zero.  If nmemb or size is 0, then calloc() returns
	either NULL, or a unique pointer value that can later be successfully
	passed to free().  If the multiplication of nmemb and size would result
	in integer  overflow, then calloc() returns an error.  By contrast,
	an integer overflow would not be detected in the following call to malloc(),
	with the result that an incorrectly sized block of mem‐
	ory would be allocated:

		malloc(nmemb * size);
*/
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (size != 0 && nmemb > 18446744073709551615UL / size)
		return (NULL);
	arr = (void *)malloc(nmemb * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, (nmemb * size));
	return (arr);
}

// #include <stdio.h>
// int main()
// {
//     int *arr = ft_calloc(5, sizeof(int));
//     for (int i = 0; i < 5; i++)
//         printf("%d",arr[i]);
//      free(arr);
// }