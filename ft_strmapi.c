/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 23:44:03 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/27 23:57:10 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	mapi = ft_substr(s);
	if (mapi == NULL)
		return (NULL);
	i = 0;
	return (mapi);
}