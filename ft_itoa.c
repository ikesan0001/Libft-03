/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:46:37 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/13 01:08:46 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(int n);
static void		ft_strreverse(char *src);

char	*ft_itoa(int n)
{
	int		i;
	char	*c;
	int		sign;

	i = 0;
	sign = n;
	c = (char *)ft_calloc(ft_nbrlen(n), sizeof(char));
	if (c == NULL)
		return (NULL);
	if (n < 0)
	{
		c[i++] = n % 10 * -1 + '0';
		n /= -10;
	}
	if (n == 0)
		c[i] = '0';
	while (n > 0)
	{
		c[i++] = n % 10 + '0';
		n /= 10;
	}
	if (sign < 0)
		c[i] = '-';
	ft_strreverse(c);
	return (c);
}

static	size_t	ft_nbrlen(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	i++;
	return (i);
}

static	void	ft_strreverse(char *src)
{
	char	buf;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	while (src_len > i)
	{
		buf = src[i];
		src[i++] = src[--src_len];
		src[src_len] = buf;
	}	
	return ;
}
