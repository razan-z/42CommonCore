/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 10:45:14 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/12 12:18:12 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(s);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// static char	ft_Onlypair_toupper(unsigned int i, char c)
// {
// 	if (c >= 'a' && c <= 'z' && (i % 2) == 0)
// 		c -= 32;
// 	return (c);
// }

// #include <stdio.h>
// int main()
// {
//     printf("%s", ft_strmapi("abc0", ft_Onlypair_toupper));
// }