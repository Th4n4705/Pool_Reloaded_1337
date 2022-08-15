/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twakrim <taha.wakrim.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:34:57 by twakrim           #+#    #+#             */
/*   Updated: 2018/10/06 22:47:37 by twakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *ch)
{
	int i;

	i = 0;
	while (ch[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*ch;

	ch = (char *)malloc(sizeof(src) * (ft_strlen(src) + 1));
	if (ch == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		ch[i] = src[i];
		i++;
	}
	ch[i] = '\0';
	return (ch);
}
