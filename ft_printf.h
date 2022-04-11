/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:52:45 by bperron           #+#    #+#             */
/*   Updated: 2022/04/06 13:00:52 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H_
#define FT_PRINTF_H_

#include <unistd.h>
#include <stdarg.h>

int	ft_printf(const char *str, ...);

int	ft_printfs(char *s);
int	ft_printfnbr(long nb, int i);
int ft_printfc(char c);
int	ft_printfu(unsigned int nb);
int ft_hexlen(unsigned long nb);
int ft_printfhex(char format, unsigned int nb);
void ft_printptr(unsigned long ptr, int *ret);
int ft_printfp(unsigned long ptr);

#endif
