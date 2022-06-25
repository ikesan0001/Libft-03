/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:53:28 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/26 05:15:12 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	c_len = ft_strlen(s1 + i);
	if (c_len == 0)
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (j > 0 && ft_strchr(set, s1[j--]) != NULL)
		c_len--;
	c = ft_substr(s1, i, c_len);
	if (c == NULL)
		return (NULL);
	return (c);
}
