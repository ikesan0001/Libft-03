/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:53:28 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/23 01:51:16 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*c;
	size_t	i;
	size_t	j;
	size_t	c_len;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));

	c_len = ft_strlen(s1);
	if (c_len == 0)
		return (ft_strdup(""));
	i = 0;
	j = c_len - 1;
	while (j > 0 && ft_strchr(set, s1[j--]) != NULL)
		i++;
	c_len -= i;
	i = 0;
	j = 0;
	while (s1[j] != '\0' && ft_strchr(set, s1[j++]) != NULL)
		i++;
	if (i >= c_len)
		return (ft_strdup(""));
	c_len -= i;

	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	c_len = ft_strlen(s1 + i);
	if (c_len == 0)
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (j > 0 && ft_strchr(set, s1[j--]) != NULL)
		c_len--;
	c_len++;
	c = ft_substr(s1, i, c_len);
	if (c == NULL)
		return (NULL);
	return (c);
}
*/

#include "libft.h"
#define NOT_FOUND NULL

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*trim_s;
	size_t	size;
	size_t	i;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	while (*s1 && (ft_strchr(set, *s1) != NOT_FOUND))
		s1++;
	i = ft_strlen(s1);
	if (i == 0)
		return (ft_strdup(""));
	i--;
	while (i > 0 && (ft_strrchr(set, s1[i]) != NOT_FOUND))
		i--;
	size = i + 1;
	trim_s = ft_substr(s1, 0, size);
	return (trim_s);
}
