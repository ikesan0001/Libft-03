/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:39:01 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/30 17:02:47 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		if (n <= -10)
			ft_putnbr_fd(n / -10, fd);
		else
			write(fd, n % -10);
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	write(fd, n % 10, 1);
	return ;
}
