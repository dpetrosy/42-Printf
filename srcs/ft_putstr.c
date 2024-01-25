/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 05:27:10 by dpetrosy          #+#    #+#             */
/*   Updated: 2024/01/25 18:19:22 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.h"

size_t	ft_putchar(const char c)
{
	write (1, &c, 1);
	return (1);
}

size_t	ft_putstr(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i])
	{
		write (1, &str[i], 1);
		++i;
	}
	return (i);
}
