/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:22:26 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/26 01:40:05 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_split_count(char const *s, char c);
static void		ft_cto0(char *s, char c);
static char		**ft_free(char **str, size_t end, char *d);
static char		**ft_splitting(char **split, char *d, size_t cnt, size_t s_len);

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*d;
	size_t	s_len;
	size_t	cnt;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	cnt = ft_split_count(s, c);
	if (cnt == SIZE_MAX)
		return (NULL);
	split = (char **)malloc((cnt + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	d = ft_strdup(s);
	if (d == NULL)
		return (NULL);
	ft_cto0(d, c);
	split = ft_splitting(split, d, cnt, s_len);
	free(d);
	return (split);
}

static size_t	ft_split_count(char const *d, char c)
{
	size_t	cnt;
	size_t	i;

	i = 0;
	cnt = 0;
	while (d[i])
	{
		if (d[i] != c && (i == 0 || d[i - 1] == c))
			cnt++;
		i++;
	}
	return (cnt);
}

static void	ft_cto0(char *d, char c)
{
	size_t	i;

	i = 0;
	while (d[i] != '\0')
	{
		if (d[i] == c)
			d[i] = '\0';
		i++;
	}
}

static char	**ft_free(char **str, size_t end, char *d)
{
	size_t	i;

	i = 0;
	while (i <= end)
		free(str[i++]);
	free(str);
	free(d);
	return (NULL);
}

static char	**ft_splitting(char **split, char *d, size_t cnt, size_t s_len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < s_len && j < cnt)
	{
		while (i < s_len && d[i] == '\0')
			i++;
		split[j] = ft_strdup(d + i);
		if (split[j] == NULL)
			return (ft_free(split, j, d));
		while (i < s_len && d[i] != '\0')
			i++;
		j++;
	}
	split[j] = NULL;
}
