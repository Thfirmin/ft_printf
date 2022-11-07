/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 05:25:23 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/14 21:14:33 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*ptr;

	str = malloc(ft_strlen(s1) + 1);
	if (!str)
		return (0);
	ptr = str;
	while (*s1 != '\0')
		*str++ = *s1++;
	*str = '\0';
	return (ptr);
}
