/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:22:26 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/25 00:41:15 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"

static size_t	ft_split_count(char const *s, char c);
static char		*ft_split_trim(char const *src, char const *set);
static char		**ft_free(char **str, size_t end, char *divider);

char	**ft_split(char const *s, char c)
{
	char	**d;
	char	*s_trim;
	char	divider[2];
	size_t	cnt;
	size_t	i;

	if (s == NULL)
		return (NULL);
	cnt = ft_split_count(s, c);
	if (cnt == SIZE_MAX)
		return (NULL);
	d = (char **)malloc((cnt + 1) * sizeof(char *));
	if (d == NULL)
		return (NULL);
	i = 0;
	ft_strlcpy(divider, &c, 2);
	while (i < cnt)
	{
		s_trim = ft_strtrim(s, divider);
		d[i] = ft_split_trim(s, divider);
		if (d[i] == NULL)
			return (ft_free(d, i, divider));
		i++;
	}
	free(divider);
	return (d);
}

static char	*ft_split_trim(char const *src, char const *set)
{
	char	*c;
	size_t	i;
	size_t	c_len;

	if (src == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(src));
	i = 0;
	c_len = 0;
	while (src[i] != '\0' && ft_strchr(set, src[i]) != NULL)
		i++;
	while (src[i] != '\0' && ft_strchr(set, src[i++]) == NULL)
		c_len++;
	if (c_len == 0)
		return (ft_strdup(""));
	c = ft_substr(src, i, c_len);
	if (c == NULL)
		return (NULL);
	return (c);
}

static size_t	ft_split_count(char const *s, char c)
{
	size_t	cnt;
	size_t	i;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			cnt++;
		i++;
	}
	return (cnt);
}

static char	**ft_free(char **str, size_t end, char *divider)
{
	size_t	i;

	i = 0;
	while (i <= end)
		free(str[i++]);
	free(str);
	free(divider);
	return (NULL);
}
*/

#include "libft.h"

static size_t	ft_split_count(char const	*s, char	c)
{
	size_t	cnt;
	size_t	i;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			cnt++;
		i++;
	}
	return (cnt);
}

static size_t	ft_splitlen(char const *s, char	c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

static char	**ft_free(char	**str, size_t	end)
{
	size_t	i;

	i = 0;
	while (i <= end)
		free(str[i++]);
	free(str);
	return (NULL);
}

char	**ft_do_split(char	**split_str, char const	*s, char	c, size_t	cnt)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (i < cnt)
	{
		while (*s && *s == c)
			s++;
		len = ft_splitlen(s, c);
		split_str[i] = (char *)malloc((len + 1) * sizeof(char));
		if (split_str[i] == NULL)
			return (ft_free(split_str, i));
		ft_strlcpy(split_str[i++], s, (len + 1));
		s += len;
	}
	split_str[i] = NULL;
	return (split_str);
}

char	**ft_split(char const	*s, char	c)
{
	size_t	cnt;
	char	**split_str;

	if (s == NULL)
		return (NULL);
	cnt = ft_split_count(s, c);
	if (cnt == SIZE_MAX)
		return (NULL);
	split_str = (char **)malloc((cnt + 1) * sizeof(char *));
	if (split_str == NULL)
		return (NULL);
	return (ft_do_split(split_str, s, c, cnt));
}
