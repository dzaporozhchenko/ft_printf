/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 14:14:27 by dzaporoz          #+#    #+#             */
/*   Updated: 2018/10/24 16:28:47 by dzaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	m;

	m = 0;
	if (n > 0)
	{
		p = (char*)s;
		while (m < n)
		{
			*p = '\0';
			p++;
			m++;
		}
	}
}