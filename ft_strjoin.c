/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:01:49 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/08 13:21:04 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	size_t	c_len;

	c_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	c = (char *)malloc(c_len);
	if (c == NULL)
		return (NULL);
	ft_bzero(c, c_len);
	ft_strlcat(c, s1, ft_strlen(s1));
	ft_strlcat(c, s2, ft_strlen(s2));
	return (c);
}
