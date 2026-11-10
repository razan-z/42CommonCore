/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:27:02 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/09 15:43:37 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
// #include <stdio.h>
// #include <ctype.h>
// int main ()
// {
// 	printf("%d\n", ft_isprint('H'));
// 	printf("%d\n", isprint('H'));
// 	printf("%d\n", ft_isprint(122));
// 	printf("%d\n", isprint(122));
// 	printf("%d\n", ft_isprint('\a'));
// 	printf("%d\n", isprint('\a'));
// }