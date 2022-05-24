/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:57:25 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/23 10:49:38 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;

	s = (char *)malloc(ft_strlen(s1) + 1);
	if (s == NULL)
		return (NULL);
	ft_strlcpy(s, s1, ft_strlen(s1) + 1);
	return (s);
}
