/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 11:35:58 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/24 15:42:26 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*S;
	size_t	i;
	size_t	j;

	S = (char *)s;
	i = 0;
	j = ft_strlen(S);
	while (i <= j)
	{
		if (S[i] == (char)c)
			return (S + i);
		i++;
	}
	return (NULL);
}
