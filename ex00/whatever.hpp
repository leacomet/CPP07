/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 21:55:06 by acomet            #+#    #+#             */
/*   Updated: 2024/02/27 20:46:31 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void	swap(T &x, T &y)
{
	T	temp = x;

	x = y;
	y = temp;
	return;
}

template<typename T>
T const	&min(T const &x, T const &y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

template<typename T>
T const	&max(T const &x, T const &y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

#endif
