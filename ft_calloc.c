/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:56:33 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/26 01:49:54 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;
	size_t	bytes;

	if (count == 0 || size == 0)
		return (ft_calloc(1, 1));
	bytes = count * size;
	if (bytes / count != size)
		return (NULL);
	s = malloc(bytes);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, bytes);
	return (s);
}
