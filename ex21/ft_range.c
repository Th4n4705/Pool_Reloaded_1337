/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twakrim <taha.wakrim.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 10:23:46 by twakrim           #+#    #+#             */
/*   Updated: 2018/10/06 23:22:50 by twakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tint;
	int		calc;
	int		i;

	if (min >= max)
		return (0);
	calc = max - min;
	tint = (int *)malloc(sizeof(int) * (calc));
	if (tint == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		tint[i] = min;
		min++;
		i++;
	}
	return (tint);
}
