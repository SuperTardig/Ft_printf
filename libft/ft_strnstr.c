/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:44:08 by bperron           #+#    #+#             */
/*   Updated: 2022/04/05 14:22:16 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	start;
	int	len2;

	i = 0;
	if (haystack == needle)
		return ((char *) needle);
	if (needle[0] == 0)
		return ((char *) haystack);
	while (haystack[i] && len-- > 0)
	{
		j = 0;
		start = i;
		len2 = len;
		while (haystack[i++] == needle[j++] && len2-- > 0)
			if (needle[j + 1] == 0)
				return ((char *) &haystack[start]);
		else if (needle[j + 1] != haystack[i + 1])
			break ;
	}
	return (NULL);
}
