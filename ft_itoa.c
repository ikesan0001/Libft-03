/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:46:37 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/10 13:21:04 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

static	size_t ft_nbrlen(int n);

char	*ft_itoa(int n)
{
	size_t	digit;
	int		i;
	char	*c;
	int		backup;

	backup = n;
	i = 0;
	digit = ft_nbrlen(n);
	c = (char *)malloc(digit);
	if (c = NULL)
		return (NULL);
	if (n < 0)
	{
	}
	printf("%d\n%zu\n", n ,digit);
	return (NULL);
}

static	size_t	ft_nbrlen(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	main(void)
{
	ft_itoa(INT_MIN);
	ft_itoa(INT_MAX);
	return (0);
}
