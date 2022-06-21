/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:47:38 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/21 23:13:04 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;
	size_t	s_len;

	if (s == NULL || len == SIZE_MAX)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len || len == 0)
		return (ft_strdup(""));
	c = (char *)calloc(len + 1, sizeof(char));
	if (c == NULL)
		return (NULL);
	if (len > (s_len - start))
		len = s_len - start;
	ft_strlcpy(c, s + start, len + 1);
	return (c);
}
