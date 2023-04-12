/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:50:06 by phiolive          #+#    #+#             */
/*   Updated: 2023/04/12 20:50:22 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rtn;
	int		i;
	int		j;
	size_t	len_s1;
	size_t	len_s2;

	i = -1;
	j = -1;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	rtn = malloc(len_s1 + len_s2 + 1);
	if (!rtn)
		return (NULL);
	while (s1[++i])
		rtn[i] = s1[i];
	while (s2[++j])
		rtn[i + j] = s2[j];
	rtn[i + j] = 0;
	return (rtn);
}
