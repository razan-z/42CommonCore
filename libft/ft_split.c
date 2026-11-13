/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 18:13:22 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/12 12:17:50 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*copy_word(char const *s, char c)
{
	char	*word;
	int		len;
	int		i;

	len = word_len(s, c);
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			result[j] = copy_word(&s[i], c);
			if (!result[j])
				return (NULL);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	result[j] = NULL;
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	char **res = ft_split("Hello my name is mary llo", 'y');
// 	int i = 0;
// 	while(res[i])
// 		printf("%s\t", res[i++]);
// 	i = 0;
// 	while (res[i])
// 	{
// 		free(res[i]);
// 		i++;
// 	}
// 	free(res);
// }
