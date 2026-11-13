/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:35:36 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/13 14:46:25 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_appear(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		k;
	int		size;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_appear(set, s1[i]))
		i++;
	while (j > i && ft_appear(set, s1[j - 1]))
		j--;
	size = j - i + 1;
	res = (char *) malloc (size * sizeof(char));
	if (!res)
		return (NULL);
	k = 0;
	while (k < size - 1)
	{
		res[k] = s1[i + k];
		k++;
	}
	res[k] = '\0';
	return (res);
}

// #include <stdio.h>

// int main ()
// {
// 	printf("%s", ft_strtrim("ffaafHELLOaaff", "fa"));	
// }
