/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 21:47:12 by rlopez-m          #+#    #+#             */
/*   Updated: 2021/12/16 18:00:15 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d;
	int	s;

	d = 0;
	while (dest[d])
		d++;
	s = 0;
	while (src[s])
		s++;
	i = 0;
	while (i < s)
	{
			dest[i + d] = src[i];
			i++;
	}	
	dest[i + d] = '\0';
	return (dest);
}
