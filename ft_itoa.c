/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahernan <sahernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:28:20 by sahernan          #+#    #+#             */
/*   Updated: 2024/02/07 20:39:14 by sahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_putnbr(int n, int *pos, char *dest)
{
	if (n < 0)
	{
		dest[*pos] = '-';
		(*pos)++;
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr((n / 10), pos, dest);
		ft_putnbr((n % 10), pos, dest);
	}
	else
	{
		dest[*pos] = n + '0';
		(*pos)++;
	}
}

int	ft_itoa(int n)
{
	char	*dest;
	int		len;
	int		pos;

	pos = 0;
	len = ft_numlen(n);
	ft_putnbr(n, &pos, dest);
	return (len);
}
/*int main ()
{
	char *result = ft_itoa(-2147483648);
	printf("%s", result);
	return (0);
}*/
