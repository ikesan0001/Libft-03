/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:12:36 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/24 15:42:44 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*S;
	size_t	i;

	S = (char *)s;
	i = ft_strlen(S);
	while (i > 0 && S[i] != (char)c)
		i--;
	if (S[i] == (char)c)
		return (S + i);
	return (NULL);
}
