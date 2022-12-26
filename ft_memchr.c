/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:52:02 by abenmous          #+#    #+#             */
/*   Updated: 2022/10/22 09:35:30 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	u;
	unsigned char	*str;

	i = 0;
	u = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == u)
			return (&str[i]);
		i++;
	}
	return (0);
}
