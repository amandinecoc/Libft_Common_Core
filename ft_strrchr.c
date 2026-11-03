/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amcocoua <amcocoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:49:00 by amcocoua          #+#    #+#             */
/*   Updated: 2026/11/02 17:52:54 by amcocoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int		len;
	char	strc;

	len = ft_strlen(s);
	strc = (char)c;
	while (len > 0)
	{
		if (s[len] == strc)
			return ((char *)&s[len]);
		len--;
	}
	if (s[len] == strc)
		return ((char *)&s[len]);
	return (NULL);
}
