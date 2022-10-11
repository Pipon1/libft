/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:55:45 by hefurrer          #+#    #+#             */
/*   Updated: 2022/10/11 15:03:46 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdlib.h>
#include	"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		j;
	int		i;
	char	*res;
	
	i = 0;
	j = 0;
	len = ft_strlen(s1);
	res = malloc(len * sizeof(char));
	while (s1[i])
	{
		
	}	
}
