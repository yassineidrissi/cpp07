/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:47:48 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/03 18:22:42 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cctype>

template <typename T, typename U>

void iter(T* array, U number,void (*f)(T& c))
{
	for(U i = 0; i < number; i++)
		f(array[i]);
}