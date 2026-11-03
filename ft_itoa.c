/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amcocoua <amcocoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:55:00 by amcocoua          #+#    #+#             */
/*   Updated: 2026/11/02 17:59:16 by amcocoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_int(int n)
{
	int	len;
	int	nbr;

	len = 0;
	nbr = n;
	if (n > 0 || n < 0)
	{
		while (nbr != 0)
		{
			nbr = nbr / 10;
			len++;
		}
	}
	if (n < 0)
		len++;
	if (n == 0)
		len = 1;
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*nbr;
	long long	nb;

	nb = n;
	len = len_int(n);
	nbr = malloc(sizeof(char) * len + 1);
	if (!nbr)
		return (NULL);
	nbr[len] = '\0';
	len--;
	if (n < 0)
	{
		nbr[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		nbr[len] = (nb % 10 + '0');
		nb = nb / 10;
		len--;
	}
	if (n == 0)
		nbr[0] = '0';
	return (nbr);
}
