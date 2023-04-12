/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:50:01 by phiolive          #+#    #+#             */
/*   Updated: 2023/04/12 20:50:23 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;
	int		len;

	len = ft_strlen(str);
	cpy = malloc (len + 1);
	if (!str || !cpy)
		return (NULL);
	ft_memcpy(cpy, str, len);
	cpy[len] = 0;
	return (cpy);
}
