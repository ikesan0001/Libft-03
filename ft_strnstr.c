/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:32:41 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/27 09:13:39 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;

	h = (char *)haystack;
	if (ft_strlen(needle) == 0)
		return (h);
	if (len == 0)
		return (NULL);
	i = 0;
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		while (h[i + j] == needle[j] && needle[j] != '\0' && i + j < len)
			j++;
		if (needle[j] == '\0')
			return (h + i);
		i++;
	}
	return (NULL);
}
