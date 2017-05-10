/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 19:48:39 by eturcu            #+#    #+#             */
/*   Updated: 2017/02/17 19:49:30 by eturcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_numsize(int n)
{
	int	t;

	t = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n)
	{
		n /= 10;
		t++;
	}
	return (t);
}