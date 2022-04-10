/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:59:59 by guda-sil@st       #+#    #+#             */
/*   Updated: 2022/04/09 23:53:02 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_chars_to_trim(const char c, const char *set);

static	int	ft_chars_to_trim(const char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	final;
	char	*str_trimmed;

	if (!set || !s1)
		return (NULL);
	start = 0;
	final = ft_strlen(s1) - 1;
	while (ft_chars_to_trim(s1[start], set))
		start++;
	while (ft_chars_to_trim(s1[final], set))
		final--;
	str_trimmed = ft_substr(s1, start, final - start + 1);
	if (!str_trimmed)
		return (NULL);
	return (str_trimmed);
}
