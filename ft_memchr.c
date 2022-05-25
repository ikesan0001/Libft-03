/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 22:47:47 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/24 22:48:15 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*S;
	size_t			i;

	i = 0;
	S = (unsigned char *)s;
	while (i < n)
	{
		if (S[i] == (unsigned char)c)
			return (S + i);
		i++;
	}
	return (NULL);
}
