/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:57:10 by dapetros          #+#    #+#             */
/*   Updated: 2024/02/13 21:02:30 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <sys/types.h>

int		ft_printf(const char *str, ...);
size_t	ft_putnbr_base(ssize_t nbr, char *base, size_t len, char spf);
size_t	ft_putstr(const char *str);
size_t	ft_putchar(const char c);
char	*ft_strchr(const char *s, int c);

#endif  /* FT_PRINTF_H */
