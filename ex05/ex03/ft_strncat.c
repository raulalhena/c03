/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 08:58:19 by rlopez-m          #+#    #+#             */
/*   Updated: 2021/12/20 12:01:28 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	d;

	d = 0;
	while (dest[d])
		d++;
	i = 0;
	while (i < nb)
	{
		if (src[i] == '\0')
			break ;
		dest[i + d] = src[i];
		i++;
	}
	dest[i + d] = '\0';
	return (dest);
}
