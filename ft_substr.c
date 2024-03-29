/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:50:47 by phiolive          #+#    #+#             */
/*   Updated: 2023/04/12 20:51:30 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*rtn;
	size_t	lens;

	lens = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > lens)
		rtn = (char *) malloc(sizeof(char));
	else if (lens <= len)
		rtn = (char *) malloc((lens - start + 1) * sizeof(char));
	else
		rtn = (char *) malloc((len + 1) * sizeof(char));
	if (!rtn)
		return (NULL);
	i = 0;
	while (len > i && start < lens)
		rtn[i++] = s[start++];
	rtn[i] = 0;
	return (rtn);
}
