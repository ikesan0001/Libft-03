/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 02:01:43 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/25 22:29:11 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*S1;
	unsigned char	*S2;
	size_t			i;

	if (n == 0)
		return (0);
	S1 = (unsigned char *)s1;
	S2 = (unsigned char *)s2;
	i = 0;
	while (S1[i] == S2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (S1[i] - S2[i]);
}
