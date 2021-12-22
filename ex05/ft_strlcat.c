/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:03:08 by rlopez-m          #+#    #+#             */
/*   Updated: 2021/12/20 12:00:36 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	my_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dl;
	unsigned int	sl;
	unsigned int	i;
	unsigned int	di;

	dl = my_strlen(dest);
	sl = my_strlen(src);
	di = dl;
	if (size < dl)
		return (size + sl);
	else
	{
		i = 0;
		while (src[i] && di < size - 1)
		{
			dest[di] = src[i];
			di++;
			i++;
		}
		dest[di] = '\0';
	}
	if (size < dl)
		return (sl + size);
	else
		return (sl + dl);
}
