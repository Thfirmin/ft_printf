/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 05:50:39 by thfirmin          #+#    #+#             */
/*   Updated: 2022/11/06 18:33:21 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;
	int				len;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar_fd('-', fd);
		num = (n * -1);
	}
	else
		num = n;
	if (num >= 10)
	{
		len += ft_putnbr_fd((num / 10), fd);
	}
	len += ft_putchar_fd(((num % 10) + '0'), fd);
	return (len);
}
