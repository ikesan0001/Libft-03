/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:55:11 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/24 15:24:22 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*S1;
	unsigned char	*S2;
	size_t			i;

	if (s1 == s2 || n == 0)
		return (0);
	i = 0;
	S1 = (unsigned char *)s1;
	S2 = (unsigned char *)s2;
	while (S1[i] != '\0' && S2[i] != '\0' && S1[i] == S2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (S1[i] - S2[i]);
}
