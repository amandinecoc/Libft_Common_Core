/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amcocoua <amcocoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:54:26 by amcocoua          #+#    #+#             */
/*   Updated: 2026/11/02 17:58:56 by amcocoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	determine_begin(char *s1, char const *set)
{
	int	i;

	i = 0;
	while (ft_strchr(set, s1[i]) != NULL && s1[i] != '\0')
		i++;
	return (i);
}

int	determine_end(char *s1, char const *set)
{
	int	i;
	int	len;

	len = ft_strlen(s1);
	i = len;
	while (ft_strchr(set, s1[i]) != NULL && i > 0)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		begin;
	int		end;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	begin = determine_begin((char *)s1, set);
	end = determine_end((char *)s1, set);
	if (begin > end || s1[0] == '\0')
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (end - begin + 2));
	if (!str)
		return (NULL);
	while (s1[begin] != '\0' && begin <= end)
	{
		str[i] = s1[begin];
		i++;
		begin++;
	}
	str[i] = '\0';
	return (str);
}
