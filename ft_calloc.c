/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:48:53 by phiolive          #+#    #+#             */
/*   Updated: 2023/04/12 20:48:53 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*rtn;

	rtn = malloc(number * size);
	if (!rtn)
		return (NULL);
	ft_bzero (rtn, number * size);
	return (rtn);
}
