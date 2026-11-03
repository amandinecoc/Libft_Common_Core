/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amcocoua <amcocoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:48:41 by amcocoua          #+#    #+#             */
/*   Updated: 2026/11/02 17:56:21 by amcocoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	strc;

	i = 0;
	strc = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == strc)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == strc)
		return ((char *)&s[i]);
	return (NULL);
}
