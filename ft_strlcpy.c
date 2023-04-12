/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:50:11 by phiolive          #+#    #+#             */
/*   Updated: 2023/04/12 20:50:22 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	count;

	count = -1;
	if (!dst_size)
		return (ft_strlen(src));
	while (dst_size-- && src[++count])
		dst[count] = src[count];
	dst[count] = 0;
	return (ft_strlen(src));
}
