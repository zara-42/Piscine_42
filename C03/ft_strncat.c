/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabdulz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:48:52 by zaabdulz          #+#    #+#             */
/*   Updated: 2023/06/18 11:07:48 by zaabdulz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;		
	unsigned int	s;

	i = 0;
	s = 0;
	while (dest[i] != '\0')
	{
		i++;
	}	
	while (src[s] != '\0' && s < nb)
	{
		dest[i] = src[s];
		i++;
		s++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int	main()
{
	char dest[] = "Sunny";
	char src[] = "week";
	unsigned int nb = 2;
	ft_strncat(dest, src, nb);
	printf("%s", dest);
	return(0);
}*/
