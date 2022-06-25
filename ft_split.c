/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:22:26 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/25 23:55:57 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_split_count(char const *s, char c);
static void		ft_cto0(char *s, char c);
static char		**ft_free(char **str, size_t end, char *dst);

char	**ft_split(char const *s, char c)
{
	char	**splited;
	char	*dst;
	size_t	s_len;
	size_t	i;
	size_t	cnt;
	size_t	j;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	dst = ft_strdup(s);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s, s_len + 1);
	cnt = ft_split_count(dst, c);
	if (cnt == SIZE_MAX)
		return (NULL);
	splited = (char **)malloc((cnt + 1) * sizeof(char *));
	if (splited == NULL)
		return (NULL);
	ft_cto0(dst, c);
	i = 0;
	j = 0;
	while (i < s_len && j <= cnt)
	{
		while (i < s_len && dst[i] == '\0')
			i++;
		splited[j] = ft_substr(dst, i + 1, ft_strlen(s));
		if (splited[j] == NULL)
			return (ft_free(splited, j, dst));
		while (i < s_len && dst[i] != '\0')
			i++;
		j++;
	}
	splited[j] = NULL;
	free(dst);
	return (splited);
}

static void	ft_cto0(char *dst, char c)
{
	size_t	i;

	i = 0;
	while (dst[i] != '\0')
	{
		if (dst[i] == c)
			dst[i] = '\0';
		i++;
	}
}

static size_t	ft_split_count(char const *dst, char c)
{
	size_t	cnt;
	size_t	i;

	i = 0;
	cnt = 0;
	while (dst[i])
	{
		if (dst[i] != c && (i == 0 || dst[i - 1] == c))
			cnt++;
		i++;
	}
	return (cnt);
}

static char	**ft_free(char **str, size_t end, char *dst)
{
	size_t	i;

	i = 0;
	while (i <= end)
		free(str[i++]);
	free(str);
	free(dst);
	return (NULL);
}
