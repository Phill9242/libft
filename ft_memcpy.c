/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:49:39 by phiolive          #+#    #+#             */
/*   Updated: 2023/04/12 20:50:27 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*pointer;
	unsigned char	*dst_pointer;

	if (!dst && !src)
		return (dst);
	pointer = (unsigned char *) src ;
	dst_pointer = (unsigned char *) dst;
	while (len--)
		*dst_pointer++ = *pointer++;
	return (dst);
}
