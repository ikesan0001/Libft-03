/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:02:13 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/27 10:16:42 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	s = (char *)str;
	while (ft_isspace(s[0]))
		s++;
	if (s[j] == '+' || s[j] == '-')
		j++;
	while (ft_isdigit(s[j]))
	{
		i = i * 10 + (long)(s[j] - '0');
		j++;
	}
	if (s[0] == '-')
		i *= -1;
	is = ft_isloverflow(s, --j);
	if (is > 0)
		i = 9223372036854775807;
	if (is < 0)
		i = -9223372036854775808;
	return ((int)i);
}

int	ft_isspace(int c)
{
	return (s[0] == '\t' || s[0] == '\n' || s[0] == '\v' || \
s[0] == '\f' || s[0] == '\r' || s[0] == ' ');
}

int	ft_isloverflow(char *s, int digit)
{
	int		i;
	int		sign;
	char	*edge;

	sign = 1;
	edge = "9223372036854775807";
	if (s[0] == '+' || s[0] '-')
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
