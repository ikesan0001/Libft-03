/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:12:36 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/27 09:06:32 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*src;
	size_t	i;

	src = (char *)s;
	i = ft_strlen(src);
	while (i > 0 && src[i] != (char)c)
		i--;
	if (S[i] == (char)c)
		return (src + i);
	return (NULL);
}
