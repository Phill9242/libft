/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:49:51 by phiolive          #+#    #+#             */
/*   Updated: 2023/04/12 20:50:25 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		number = -n;
	}
	else
		number = n;
	if (number > 9)
		ft_putnbr_fd (number / 10, fd);
	ft_putchar_fd (number % 10 + '0', fd);
}
