/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:56:33 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/24 13:32:23 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if (count == 0 || size == 0)
	{
		s = malloc(1);
		if (s == NULL)
			return (NULL);
		ft_bzero(s, 1);
		return (s);
	}
	if (SIZE_MAX / count < size || SIZE_MAX / size < count)
		return (NULL);
	s = malloc(count * size);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, count * size);
	return (s);
}
