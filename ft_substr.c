/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:47:38 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/05 17:00:31 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;

	if (start >= ft_strlen(s) || len == 0 || start == 0)
		return (NULL);
	c = (char *)malloc(len);
	if (c == NULL)
		return (NULL);
	ft_strlcpy(c, s + start - 1, len);
	return (c);
}
