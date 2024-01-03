/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:50:02 by yassine           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/01/03 18:03:01 by yaidriss         ###   ########.fr       */
=======
/*   Updated: 2024/01/03 11:35:02 by yassine          ###   ########.fr       */
>>>>>>> 190d98e2acbce6d1c89fbf35f16371aa567b7678
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>

template <typename T>

<<<<<<< HEAD
void swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
=======
void    swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
>>>>>>> 190d98e2acbce6d1c89fbf35f16371aa567b7678
}

template <typename T>

<<<<<<< HEAD
T &min(T &a, T &b)
{
	if (a < b)
		return a;
	else
		return b;
=======
T       min(T &a, T &b)
{
    return (a < b ? a : b);
>>>>>>> 190d98e2acbce6d1c89fbf35f16371aa567b7678
}

template <typename T>

<<<<<<< HEAD
T &max(T &a, T &b)
{
	if (a < b)
		return b;
	else
		return a;
=======
T       max(T &a, T &b)
{
    return (a > b ? a : b);
>>>>>>> 190d98e2acbce6d1c89fbf35f16371aa567b7678
}