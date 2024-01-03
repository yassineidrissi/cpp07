/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 18:25:45 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/03 18:26:47 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <cctype>

template <typename T>

void    swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>

T       min(T &a, T &b)
{
    return (a < b ? a : b);
}

template <typename T>

T       max(T &a, T &b)
{
    return (a > b ? a : b);
}