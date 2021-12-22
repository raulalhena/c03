/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:06:04 by rlopez-m          #+#    #+#             */
/*   Updated: 2021/12/16 16:25:36 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*ps;
	char	*pf;

	pf = to_find;
	if (!*pf)
		return (str);
	while (*str)
	{
		ps = str;
		pf = to_find;
		while (*pf == *ps)
		{
			pf++;
			ps++;
			if (!*pf)
				return (str);
		}
		str++;
	}
	return (NULL);
}
