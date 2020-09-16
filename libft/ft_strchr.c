/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 10:05:32 by mrubio            #+#    #+#             */
/*   Updated: 2020/07/02 11:11:19 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(char *s, int c)
{
	int x;

	x = 0;
	while (s[x])
	{
		if (s[x] == c)
			return (s + x);
		x++;
	}
	if (!c && s[x] == '\0')
		return (s + x);
	return (NULL);
}