/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:31:16 by dpetrosy          #+#    #+#             */
/*   Updated: 2024/01/25 18:19:21 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char			ch;
	unsigned int	i;

	ch = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
		{
			return ((char *)(s + i));
		}
		++i;
	}
	if (s[i] == ch)
	{
		return ((char *)(s + i));
	}	
	return (0);
}
