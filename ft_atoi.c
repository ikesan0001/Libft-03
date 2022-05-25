/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:02:13 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/24 23:31:48 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c);
int	numcmp(const char *dst, const char src);

int	ft_atoi(const char *str)
{
	char		*s;
	long long	i;
	int			j;
	int			sign
	int			digit;

	i = 0;
	j = 0;
	sign = 1;
	digit = 0;
	s = (char *)str;
	while (ft_isspace(s[0]))
		s++;
	if (s[0] == '+' || s[0] == '-')
	{
		if (s[0] == '-')
			sign *= -1;
		s++;
	}
	while (ft_isdigit(s[j]) != 0)
	{
		i = i * 10 + (s[j] - "0");
		j++;
		digit++;
	}
	if (digit > 18)
	{
		if (digit > 19)
			i = -1 - sign;

	i *= sign;
	return ((int)i);
}

int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v' || \
c == '\f' || c == '\r' || c == ' ');
}

int numcmp(const char *dst, const char *src);
