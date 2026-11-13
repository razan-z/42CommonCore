/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:23:31 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/12 16:51:39 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strnstr() function locates the first occurrence of the null-ter‐
	minated string little in the string big, where not more than len
	characters are searched.  Characters that appear after a ‘\0’ charac‐
	ter are not searched.  Since the strnstr() function is a FreeBSD spe‐
	cific API, it should only be used when portability is not a concern.

RETURN VALUES
	If little is an empty string, big is returned; if little occurs
	nowhere in big, NULL is returned; otherwise a pointer to the first
	character of the first occurrence of little is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && big[i + j]
			&& i + j < len && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <bsd/string.h> 
// int main ()
// {
// // the fct strnstr should be compiled with the flag -lbsd
// 	printf("%s\n", strnstr("Helloworlddd", "world", 12)); 
// 	printf("%s\n", ft_strnstr("Helloworlddd", "world", 12));
// }