/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                 :+:     :+:            */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:06:19 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/13 20:56:37 by Thinotsuki   ###     ###.br              */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;
	
	node = malloc (sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	return (node);
}
