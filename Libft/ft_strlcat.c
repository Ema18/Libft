/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 17:44:40 by eturcu            #+#    #+#             */
/*   Updated: 2017/02/17 17:47:06 by eturcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	aux;

	i = 0;
	j = 0;
	if ((int)(size - ft_strlen(dst) - 1) < 0)
		return (ft_strlen(src) + size);
	aux = ft_strlen(dst);
	while (dst[i])
		i++;
	while (j < (size - aux - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (aux + ft_strlen(src));
}
