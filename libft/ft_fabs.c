/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fabs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 18:45:26 by mrubio            #+#    #+#             */
/*   Updated: 2021/06/21 16:35:40 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_abs(double num)
{
	if (num < 0.0)
		return (num * -1.0);
	return (num);
}
