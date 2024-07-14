/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayki <tayki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 00:59:34 by tayki             #+#    #+#             */
/*   Updated: 2024/07/15 01:28:46 by tayki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countDigit(long long n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n != 0)
	{
		n = n / 10;
		++count;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			count;
	char		*str;
	long int	num;

	count = countDigit(n);
	num = n;
		if (n < 0)
	{
		num *= -1;
		count++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	*(str + count) = 0;
	while (count--)
	{
		*(str + count) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
	{
		*(str + 0) = '-';
	}
	return (str);
}
