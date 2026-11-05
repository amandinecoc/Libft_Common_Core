/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amcocoua <amcocoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:45:26 by amcocoua          #+#    #+#             */
/*   Updated: 2026/11/05 13:38:36 by amcocoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest;

	dest = ft_strlen(dst);
	i = dest;
	j = 0;
	if (size <= dest)
		return (size + ft_strlen(src));
	while (src[j] != '\0' && (i + 1) < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dest + ft_strlen(src));
}
