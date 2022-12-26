/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:14:20 by abenmous          #+#    #+#             */
/*   Updated: 2022/10/22 10:29:52 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c, size_t wide)
{
	char	*f;
	char	o;
	size_t	i;

	i = 0;
	f = (char *)b;
	o = (char)c;
	while (i < wide)
	{
		f[i] = o;
		i++;
	}
	return (f);
}
