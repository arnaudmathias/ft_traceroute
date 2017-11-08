/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amathias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:07:31 by amathias          #+#    #+#             */
/*   Updated: 2015/12/02 16:55:53 by amathias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;
	int		i;

	if (s)
	{
		i = 0;
		ptr = (char*)s;
		while (n--)
		{
			ptr[i] = (char)c;
			i++;
		}
	}
	return (s);
}