/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printformatnbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:09:56 by bperron           #+#    #+#             */
/*   Updated: 2022/04/11 12:55:34 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_printfnbr(long nb, int i)
{
	int		ret;
	char	arr[12];

	ret = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		i += 1;
	}
	while (nb > 0)
	{
		arr[ret] = nb % 10 + '0';
		nb /= 10;
		ret++;
	}
	i += ret;
	while (ret > 0)
		write (1, &arr[--ret], 1);
	return (i);
}

int	ft_printfu(unsigned int nb)
{
	int ret;

	ret = 0;
	if (nb < 0)
		nb = 4294967295 - (nb - 1);
	ret = ft_printfnbr(nb, 0);
	return (ret);
}

int	ft_hexlen(unsigned long nb)
{
	int i;

	i = 1;
	while (nb >= 16)
	{
		nb /= 16;
		i++;
	}
	return (i);
}

int	ft_printfhex(char format, unsigned int nb)
{
	char			*hexbase;
	
    if (format == 'x')
        hexbase = "0123456789abcdef";
    else if (format == 'X') 
        hexbase = "0123456789ABCDEF";
	if (nb >= 16)
	{
		ft_printfhex(format, (nb / 16));
		ft_printfhex(format, (nb % 16));
	}
	else 
		write (1, &hexbase[nb], 1);
    return (ft_hexlen(nb));
}

void	ft_printptr(unsigned long ptr, int *ret)
{
	if (ptr >= 16)
		ft_printptr((ptr / 16), ret);
	write(1, &"0123456789abcdef"[ptr % 16], 1);
	*ret += 1;
}

int ft_printfp(unsigned long ptr)
{
	int ret;

	ret = 2;
	write (1, "0x", 2);
	ft_printptr(ptr, &ret);
	return (ret);
}
