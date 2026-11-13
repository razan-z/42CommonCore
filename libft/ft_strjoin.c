/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:47:09 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/11 16:35:08 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	char	*str;

	s = (char *) malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	str = s;
	if (!s)
		return (NULL);
	while (*s1)
		*s++ = *s1++;
	while (*s2)
		*s++ = *s2++;
	*s = '\0';
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	printf("s1: %s\n", ft_strjoin("Hello","world"));
// 	printf("s2: %s\n", ft_strjoin("","world"));
// 	printf("s3: %s\n", ft_strjoin("Hello",""));
// }