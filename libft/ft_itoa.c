/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:16:31 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/22 17:11:59 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Turn a integer number in a numeric string

static void	ft_nbrlen(int n, int *len);

char	*ft_itoa(int n)
{
	int				len;
	char			*str;
	unsigned int	aux;

	len = 0;
	ft_nbrlen(n, &len);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (n < 0)
		aux = (n * -1);
	else
		aux = n;
	*(str + len) = '\0';
	while (len--)
	{
		*(str + len) = ((aux % 10) + '0');
		aux /= 10;
	}
	if (n < 0)
		*str = '-';
	return (str);
}

static void	ft_nbrlen(int n, int *len)
{
	unsigned int	aux;

	if (n < 0)
	{
		*len += 1;
		aux = (n * -1);
	}
	else
		aux = n;
	if (aux >= 10)
	{
		*len += 1;
		ft_nbrlen((aux / 10), len);
	}
	if (aux < 10)
		*len += 1;
}
