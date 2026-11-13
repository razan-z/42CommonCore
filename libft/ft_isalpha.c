/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:19:01 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/11 13:24:56 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// #include <stdio.h>
// #include <ctype.h>
// int main ()
// {
// 	char s = 'w';
// 	char s1 = 'W';
// 	char s2 = '3';
// 	char s3 = 60;
// 	char s4 = 107;

// 	printf("%d\n", ft_isalpha(s));
// 	printf("%d\n", isalpha(s));
// 	printf("%d\n", ft_isalpha(s1));
// 	printf("%d\n", isalpha(s1));
// 	printf("%d\n", ft_isalpha(s2));
// 	printf("%d\n", isalpha(s2));

// 	printf("%d\n", ft_isalpha(s3));
// 	printf("%d\n", isalpha(s3));

// 	printf("%d\n", ft_isalpha(s4));
// 	printf("%d\n", isalpha(s4));

// }