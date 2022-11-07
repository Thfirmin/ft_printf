/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:06:56 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/06 17:00:06 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size ++;
		lst = lst->next;
	}
	return (size);
}
