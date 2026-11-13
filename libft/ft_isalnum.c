/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:40:11 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/11 13:43:33 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isalpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

static int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
// #include <stdio.h>  
// #include <ctype.h>

// int main ()
// {
// 	printf("%d\n", ft_isalnum(4));
// 	printf("%d\n", isalnum(4));

// 	printf("%d\n", ft_isalnum(-2));
// 	printf("%d\n", isalnum(-2));

// 	printf("%d\n", ft_isalnum('4'));
// 	printf("%d\n", isalnum('4'));

// 	printf("%d\n", ft_isalnum(-4));
// 	printf("%d\n", isalnum(-4));

// 	printf("%d\n", ft_isalnum('a'));
// 	printf("%d\n", isalnum('a'));

// }