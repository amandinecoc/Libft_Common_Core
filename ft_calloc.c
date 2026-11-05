/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amcocoua <amcocoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:52:12 by amcocoua          #+#    #+#             */
/*   Updated: 2026/11/03 09:58:00 by amcocoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t n, size_t size)
{
	char	*tmp;
	int		len;
	int		i;

	len = n * size;
	i = 0;
	tmp = malloc(sizeof(char) * len);
	if (!tmp)
		return (NULL);
	while (i < len)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
