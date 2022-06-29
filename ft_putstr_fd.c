/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:42:38 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/29 13:51:53 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	size_t	s_len;

	if (s == NULL)
		return ;
	i = 0;
	s_len = ft_strlen(s);
	while (i < s_len)
	{
		write(fd, &s[i], 1);
		i++;
	}
	return ;
}
