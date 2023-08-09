/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabdulz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:48:28 by zaabdulz          #+#    #+#             */
/*   Updated: 2023/06/17 15:15:10 by zaabdulz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_strcmp("beauty", "be"));
	printf("\n%d", ft_strcmp("beauty", "beauty"));
	printf("\n%d", ft_strcmp("beu", "beauty"));
}
*/
