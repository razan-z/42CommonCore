/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 19:31:49 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/10 20:20:03 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) - 1 ;
	if (i < 0)
		return (NULL);
	while (s[i] != c && s[i] != '\0')
		i--;
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int main ()
// {
// 	printf("%s\n", strrchr("Hello", 'l'));
// 	printf("%s\n",ft_strrchr("Hello", 'l'));
// }