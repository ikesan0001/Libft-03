/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 23:44:03 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/28 19:55:01 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mapi;
	unsigned int	i;
	size_t			s_len;

	if (s == NULL || f == NULL)
		return (NULL);
	mapi = ft_strdup(s);
	if (mapi == NULL)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	while (i < s_len)
		mapi[i] = (*f)(i, s[i++]);
	return (mapi);
}
