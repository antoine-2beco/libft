/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:14:08 by ade-beco          #+#    #+#             */
/*   Updated: 2023/10/26 14:00:49 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_sep(char s, char c)
{
	if (s == c)
		return (1);
	else
		return (0);
}

int	ft_count_str(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && ft_is_sep(s[i], c))
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && !ft_is_sep(s[i], c))
			i++;
	}
	return (count);
}

int	ft_strlensep(char *s, char c)
{
	int	l;

	l = 0;
	while (s[l] != '\0' && !ft_is_sep(s[l], c))
		l++;
	return (l);
}

char	*ft_getstr(char *s, char c)
{
	int		i;
	int		l;
	char	*out;

	i = 0;
	l = ft_strlensep(s, c);
	out = malloc(sizeof(char) * l + 1);
	if (!out)
		return (NULL);
	while (i < l)
	{
		out[i] = s[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**strings;

	i = 0;
	strings = (char **)malloc (sizeof(char *)
			* (ft_count_str((char *)(s), c) + 1));
	if (!strings)
		return (NULL);
	while (*s != '\0')
	{
		while (*s != '\0' && ft_is_sep(*s, c))
			s++;
		if (*s != '\0')
		{
			strings[i] = ft_getstr((char *)(s), c);
			i++;
		}
		while (*s && !ft_is_sep(*s, c))
			s++;
	}
	strings[i] = 0;
	return (strings);
}
