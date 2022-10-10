/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:02:40 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/07 11:22:20 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*c_temp;

	if (!lst)
		return ;
	else
	{
		while (*lst)
		{
			c_temp = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = c_temp;
		}
	}
}
