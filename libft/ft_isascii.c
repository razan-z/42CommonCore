/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:00:24 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/11 14:27:00 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>
// #include <ctype.h>
// int main ()
// {
// 	printf("%d\n", ft_isascii('s'));
// 	printf("%d\n", isascii('s'));

// 	printf("%d\n", ft_isascii('\n'));
// 	printf("%d\n", isascii('\n'));

// 	printf("%d\n", ft_isascii('8'));
// 	printf("%d\n", isascii('8'));

// 	printf("%d\n", ft_isascii(8));
// 	printf("%d\n", isascii(8));

// 	printf("%d\n", ft_isascii(-1));
// 	printf("%d\n", isascii(-1));
// }