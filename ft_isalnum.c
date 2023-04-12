/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:48:56 by phiolive          #+#    #+#             */
/*   Updated: 2023/04/12 20:48:56 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= 97 && c <= 122)
		return (2);
	else if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 48 && c <= 57)
		return (4);
	else
		return (0);
}
