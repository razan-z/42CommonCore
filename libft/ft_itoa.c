/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzbib <rzbib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 18:52:42 by rzbib             #+#    #+#             */
/*   Updated: 2026/11/13 14:48:37 by rzbib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		size;
	int		sign;
	char	*nbr;

	nb = n;
	sign = (n < 0);
	if (sign)
		nb = -nb;
	size = count_digits(nb);
	nbr = (char *)malloc((size + sign + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	nbr[size + sign] = '\0';
	while (size > 0)
	{
		nbr[size + sign - 1] = (nb % 10) + '0';
		nb /= 10;
		size--;
	}
	if (sign)
		nbr[0] = '-';
	return (nbr);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(-2147483648));
// }