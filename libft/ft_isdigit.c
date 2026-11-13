/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:22:10 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/11 13:24:52 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
// #include <stdio.h>  
// #include <ctype.h>
// int main ()
// {
// 	printf("%d\n", ft_isdigit(4));
// 	printf("%d\n", ft_isdigit(-2));
// 	printf("%d\n", ft_isdigit('4'));
// 	printf("%d\n", isdigit('4'));
// 	printf("%d\n", ft_isdigit(-4));
// 	printf("%d\n", ft_isdigit('a'));
// }