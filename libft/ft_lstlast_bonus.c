/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                :+:     :+:            */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:04:41 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/08 19:58:28 by Thinotsuki   ###     ###.br              */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
