/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:02:13 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/28 11:56:24 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isloverflow(char *s, int digit);
int	ft_isspace(int c);

int	ft_atoi(const char *str)
{
	char	*s;
	long	i;
	int		j;
	int		is;

	i = 0;
	j = 0;
	is = 0;
	s = (char *)str;
	while (ft_isspace(s[0]))
		s++;
	if (s[j] == '+' || s[j] == '-')
		j++;
	while (ft_isdigit(s[j]))
		i = i * 10 + (long)(s[j++] - '0');
	if (s[0] == '-')
		i *= -1;
	if (--j >= 19)
		is = ft_isloverflow(s, j);
	if (is == 1)
		i = 9223372036854775807;
	if (is == -1)
	{
		i = -9223372036854775807;
		i--;
	}
	return ((int)i);
}

int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v' || \
c == '\f' || c == '\r' || c == ' ');
}

int	ft_isloverflow(char *s, int digit)
{
	int		sign;
	char	edge[20];

	sign = 1;
	ft_strlcpy(edge, "9223372036854775807", 20);
	if (s[0] == '+' || s[0] == '-')
	{
		digit--;
		if (s[0] == '-')
		{
			sign = -1;
			edge[18]++;
		}
		s++;
	}
	if (digit > 19)
		return (sign);
	if (ft_strncmp(edge, s, 19) < 0)
		return (sign);
	return (0);
}
