/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljiriste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 11:03:56 by ljiriste          #+#    #+#             */
/*   Updated: 2023/06/10 11:41:43 by ljiriste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_first_line(int width)
{
	ft_putchar('A');
	--width;
	while (width > 1)
	{
		ft_putchar('B');
		--width;
	}
	if (width == 1)
		ft_putchar('C');
	ft_putchar('\n');
	return ;
}

void	print_last_line(int width)
{
	ft_putchar('C');
	--width;
	while (width > 1)
	{
		ft_putchar('B');
		--width;
	}
	if (width == 1)
		ft_putchar('A');
	ft_putchar('\n');
	return ;
}

void	print_inside(int width)
{
	ft_putchar('B');
	--width;
	while (width > 1)
	{
		ft_putchar(' ');
		--width;
	}
	if (width == 1)
		ft_putchar('B');
	ft_putchar('\n');
	return ;
}

void	rush(int x, int y)
{
	print_first_line(x);
	--y;
	while (y > 1)
	{
		print_inside(x);
		--y;
	}
	if (y == 1)
		print_last_line(x);
	return ;
}
