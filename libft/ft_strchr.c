/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:53:46 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/10 19:29:33 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (!*s || *s != c)
		s++;
	return ((char *)s);
}

// #include <string.h>
// #include <stdio.h>

// int main ()
// {
// 	printf("%p\n",strchr("Hello", 'l'));
// 	printf("%p\n",ft_strchr("Hello", 'l'));

// }