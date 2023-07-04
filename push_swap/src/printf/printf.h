/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:48:14 by flmartin          #+#    #+#             */
/*   Updated: 2023/03/23 12:41:30 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_cases(char c, va_list args);
int		ft_case_c(va_list args);
int		ft_case_s(va_list args);
int		ft_case_p(va_list args);
int		ft_case_d(va_list args);
int		ft_case_i(va_list args);
int		ft_case_u(va_list args);
int		ft_case_x(va_list args);
int		ft_case_bigx(va_list args);
int		ft_case_last(void);
int		ft_digit(long long int i, int length_base);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr(int nb);
void	ft_putnbr2(unsigned int nb);
void	ft_putnbr_base(long long int nbr, const char *base);
void	ft_putnbr_base2(long long unsigned int nbr, const char *base);
int		ft_printf(const char *str, ...);
int		ft_strlen(const	char *s);
int		ft_check_base(const char *base);

#endif
