/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 21:51:27 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/18 20:14:24 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned long int	count;

	count = 0;
	if (s)
	{
		while (*s)
		{
			write (fd, s++, 1);
		}
		write (fd, "\n", 1);
	}
}
