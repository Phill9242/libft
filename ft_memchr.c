/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:49:34 by phiolive          #+#    #+#             */
/*   Updated: 2023/04/12 20:50:27 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *)b;
	while (len--)
	{
		if (s[i] == (char)c)
			return ((void *)(b + i));
		i++;
	}
	return (0);
}
