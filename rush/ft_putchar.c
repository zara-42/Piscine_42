/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljiriste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 10:51:23 by ljiriste          #+#    #+#             */
/*   Updated: 2023/06/11 11:56:47 by ljiriste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	print(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		++str;
	}
	return ;
}

void	print_error(void)
{
	print("Invalid input. Side length cannot be 0 or negative.\n");
	return ;
}
