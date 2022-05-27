/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 11:35:58 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/27 09:04:51 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*src;
	size_t	i;
	size_t	s_len;

	src = (char *)s;
	i = 0;
	s_len = ft_strlen(src);
	while (i <= s_len)
	{
		if (src[i] == (char)c)
			return (src + i);
		i++;
	}
	return (NULL);
}
