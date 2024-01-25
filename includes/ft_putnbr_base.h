/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 02:18:38 by dpetrosy          #+#    #+#             */
/*   Updated: 2022/04/15 21:00:38 by dpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUTNBR_BASE_H
# define FT_PUTNBR_BASE_H

# include <stdlib.h>
# include <sys/types.h>

size_t	ft_putnbr_base(ssize_t nbr, char *base, size_t len, char spf);
void	print_base(ssize_t num, char *base, size_t len, size_t *count);
size_t	ft_putchar(const char c);
size_t	ft_putstr(const char *str);

#endif  /* FT_PUTNBR_BASE_H */
