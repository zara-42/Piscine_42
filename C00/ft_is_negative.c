/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabdulz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 10:42:01 by zaabdulz          #+#    #+#             */
/*   Updated: 2023/06/11 10:43:06 by zaabdulz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	write(1, "P", 1);
}

int main(void)
{
	ft_is_negative(5);
	ft_is_negative(-5);
	ft_is_negative(-5);
	return (0);
}

