/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amcocoua <amcocoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:40:02 by amcocoua          #+#    #+#             */
/*   Updated: 2026/11/02 17:49:22 by amcocoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*tmp_s;

	tmp_s = (char *)s;
	while (n > 0)
	{
		*tmp_s = (char)c;
		tmp_s++;
		n--;
	}
	return (s);
}
