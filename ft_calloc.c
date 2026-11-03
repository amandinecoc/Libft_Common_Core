/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amcocoua <amcocoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:52:12 by amcocoua          #+#    #+#             */
/*   Updated: 2026/11/02 17:46:04 by amcocoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t n, size_t size)
{
	char	*tmp;
	int		len;
	int		i;

	len = nmemb * size;
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
