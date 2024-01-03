/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:50:02 by yassine           #+#    #+#             */
/*   Updated: 2024/01/03 18:03:01 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>

template <typename T>

void swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>

T &min(T &a, T &b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>

T &max(T &a, T &b)
{
	if (a < b)
		return b;
	else
		return a;
}