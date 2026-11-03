/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amcocoua <amcocoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:53:26 by amcocoua          #+#    #+#             */
/*   Updated: 2026/11/02 17:56:42 by amcocoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*handle_start_over_size_exception(void)
{
	char	*newstr;

	newstr = malloc(sizeof(char) * 1);
	if (!newstr)
		return (NULL);
	newstr[0] = '\0';
	return (newstr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;
	size_t	size;

	i = 0;
	if (start >= ft_strlen(s))
		return (handle_start_over_size_exception());
	if (len > ft_strlen(&s[start]))
		size = ft_strlen(&s[start]);
	else
		size = len;
	newstr = malloc(sizeof(char) * size + 1);
	if (!newstr)
		return (NULL);
	while (len > i && s[start] != '\0')
	{
		newstr[i] = s[start];
		i++;
		start++;
	}
	newstr[i] = '\0';
	return (newstr);
}
