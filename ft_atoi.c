/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:48:44 by phiolive          #+#    #+#             */
/*   Updated: 2023/04/12 20:48:45 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const	char *nptr)
{
	long long int	number;
	int				signal;

	signal = 1;
	number = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			signal = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		number = (number * 10) + (long long int)(*nptr - 48 );
		nptr++;
	}
	return ((int) number * signal);
}
