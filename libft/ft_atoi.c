/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:33:13 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/13 13:38:02 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		i *= 10;
		i += *nptr - '0';
		nptr++;
	}
	return (sign * i);
}

// #include <stdlib.h>
// #include <stdio.h>

// int main ()
// {
// 	printf("%d\n", atoi("       +12222ad"));
// 	printf("%d\n", ft_atoi("    +12222ad"));
// }