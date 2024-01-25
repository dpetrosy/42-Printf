/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:50:07 by dpetrosy          #+#    #+#             */
/*   Updated: 2024/01/25 18:19:22 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr_base.h"

size_t	ft_putnbr_base(ssize_t nbr, char *base, size_t len, char spf)
{
	size_t	count;

	count = 0;
	if (spf == 'd' || spf == 'i' || spf == 'u')
	{
		if (nbr < 0)
		{
			count += ft_putchar('-');
			nbr = -nbr;
		}
		print_base(nbr, base, len, &count);
	}
	else if (spf == 'x' || spf == 'X')
		print_base(nbr, base, len, &count);
	else if (spf == 'p')
	{
		if (nbr == 0)
			count += ft_putstr("0x0");
		else
		{
			count += ft_putstr("0x");
			print_base(nbr, base, len, &count);
		}
	}
	return (count);
}

void	print_base(ssize_t num, char *base, size_t len, size_t *count)
{
	char		str[20];
	size_t		rem;
	size_t		i;

	i = 0;
	if (num == 0)
		*count += ft_putchar(base[0]);
	while (num != 0)
	{
		rem = num % len;
		str[i] = base[rem];
		++i;
		num = num / len;
	}
	while (i-- > 0)
		*count += ft_putchar(str[i]);
}
