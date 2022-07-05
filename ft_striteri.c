/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:07:04 by iryoga            #+#    #+#             */
/*   Updated: 2022/07/05 10:34:31 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	size_t			s_len;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	s_len = ft_strlen(s);
	while (i < s_len)
	{
		(*f)(i, &s[i]);
		i++;
	}
	return ;
}
