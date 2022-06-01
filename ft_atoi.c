/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:02:13 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/01 22:54:39 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isloverflow(char *s, int digit);
static int	ft_isspace(int c);

int	ft_atoi(const char *str)
{
	long	i;
	size_t	j;
	int		is;

	i = 0;
	j = 0;
	is = 0;
	while (ft_isspace(str[0]))
		str++;
	if (str[j] == '+' || str[j] == '-')
		j++;
	while (ft_isdigit(str[j]))
		i = i * 10 + (long)(str[j++] - '0');
	if (str[0] == '-')
		i *= -1;
	if (--j >= strlen("9223372036854775807"))
		is = ft_isloverflow(str, j);
	if (is == 1 || is == -1)
		i = 9223372036854775807 * is;
	if (is == -1)
		i--;
	return ((int)i);
}

static int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v' || \
c == '\f' || c == '\r' || c == ' ');
}

static int	ft_isloverflow(char *s, size_t digit)
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
	if (digit > strlen("9223372036854775807"))
		return (sign);
	if (ft_strncmp(edge, s, 19) < 0)
		return (sign);
	return (0);
}
