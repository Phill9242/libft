/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:49:26 by phiolive          #+#    #+#             */
/*   Updated: 2023/04/12 20:50:28 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;

	if (!lst)
		return (0);
	else
	{
		map = ft_lstnew(f(lst->content));
		if (!map)
		{
			ft_lstclear(&map, del);
			return (0);
		}
		map->next = ft_lstmap(lst->next, f, del);
		return (map);
	}
}
