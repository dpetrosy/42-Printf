/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 05:05:18 by dpetrosy          #+#    #+#             */
/*   Updated: 2022/04/14 02:18:06 by dpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <sys/types.h>

int		ft_printf(const char *str, ...);
size_t	print_spf(const char ch, va_list ap);
char	*ft_strchr(const char *s, int c);
size_t	ft_putchar(const char c);
size_t	ft_putstr(const char *str);
size_t	ft_putnbr_base(ssize_t nbr, char *base, size_t len, char spf);

#endif  /* FT_PRINTF_H */
