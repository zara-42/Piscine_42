/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljiriste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 11:03:56 by ljiriste          #+#    #+#             */
/*   Updated: 2023/06/11 11:56:20 by ljiriste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_error(void);

void	print_first_line(int width)
{
	ft_putchar('/');
	--width;
	while (width > 1)
	{
		ft_putchar('*');
		--width;
	}
	if (width == 1)
		ft_putchar('\\');
	ft_putchar('\n');
	return ;
}
void	print_inside(int width)
{
	ft_putchar('*');
	--width;
	while (width > 1)
	{
		ft_putchar(' ');
		--width;
	}
	if (width == 1)
		ft_putchar('*');
	ft_putchar('\n');
	return ;
}

void	print_last_line(int width)
{
	ft_putchar('\\');
	--width;
	while (width > 1)
	{
		ft_putchar('*');
		--width;
	}
	if (width == 1)
		ft_putchar('/');
	ft_putchar('\n');
	return ;
}



void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		print_error();
		return ;
	}
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
