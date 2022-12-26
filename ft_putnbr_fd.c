/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:34:16 by abenmous          #+#    #+#             */
/*   Updated: 2022/10/20 19:47:52 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{	
	unsigned int	nu;

	nu = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nu *= -1;
	}
	if (nu < 10)
	{
		ft_putchar_fd(nu + '0', fd);
	}
	else
	{
		ft_putnbr_fd(nu / 10, fd);
		ft_putnbr_fd(nu % 10, fd);
	}
}
