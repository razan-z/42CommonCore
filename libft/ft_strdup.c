/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:03:56 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/11 14:16:38 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strdup() function returns a pointer to a new string which is  a
	duplicate  of  the string s.  Memory for the new string is obtained
	with malloc(3), and can be freed with free(3).
	RETURN VALUE
	On success, the strdup() function returns a pointer to  the  dupli‐
	cated  string.   It  returns NULL if insufficient memory was avail‐
	able, with errno set to indicate the cause of the error
*/

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	while (s[i])
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int main ()
// {
// 	char *src = "Hello 42 !!";
// 	char *dest = ft_strdup(src);
// 	printf ("%s", dest);
// 	free(dest);
// }