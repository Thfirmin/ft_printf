/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 01:37:06 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/14 21:26:42 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nextwrd(const char *str, char set, int start);

static int	ft_setlen(const char *str, char set);

static int	ft_countwrd(const char *str, char set);

char	**ft_split(char const *s, char c)
{
	int		count;
	int		aux;
	int		len;
	int		start;
	char	**str;

	aux = -1;
	start = 0;
	count = ft_countwrd(s, c);
	str = malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (0);
	while (++aux < count)
	{
		start = ft_nextwrd(s, c, start);
		len = ft_setlen((s + start), c);
		*(str + aux) = ft_substr(s, start, len);
		start += len;
	}
	*(str + aux) = (NULL);
	return (str);
}

static int	ft_countwrd(const char *str, char set)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		if (*str != set)
		{
			count ++;
			while (*(str + 1) != set && *(str + 1) != '\0')
			{
				str ++;
			}
		}
		str ++;
	}
	return (count);
}

static int	ft_setlen(const char *str, char set)
{
	int	count;

	count = 0;
	while (*str != set && *str != '\0')
	{
		count ++;
		str ++;
	}
	return (count);
}

static int	ft_nextwrd(const char *str, char set, int start)
{
	while (*(str + start) != '\0')
	{
		if (*(str + start) != set)
		{
			return (start);
		}
		start ++;
	}
	return (0);
}
