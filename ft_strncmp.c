/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:55:11 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/27 09:11:28 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s_1;
	unsigned char	*s_2;
	size_t			i;

	if (s1 == s2 || n == 0)
		return (0);
	i = 0;
	s_1 = (unsigned char *)s1;
	s_2 = (unsigned char *)s2;
	while (s_1[i] != '\0' && s_2[i] != '\0' && s_1[i] == s_2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (s_1[i] - s_2[i]);
}
