/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:01:49 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/21 23:54:44 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	size_t	c_len;
	size_t	s1_len;
	size_t	s2_len;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s1_len == SIZE_MAX || (SIZE_MAX - s1_len - 1) < s2_len)
		return (NULL);
	c_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	c = (char *)malloc(c_len * sizeof(char));
	if (c == NULL)
		return (NULL);
	ft_bzero(c, c_len);
	ft_strlcat(c, s1, s1_len + 1);
	ft_strlcat(c, s2, c_len + 1);
	return (c);
}
