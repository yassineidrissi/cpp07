/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:47:48 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/09 00:16:14 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cctype>

template <typename T, typename U, typename N>

void iter(T* array, U number,void (*f)(N& c))
{
	for(U i = 0; i < number; i++)
		f(array[i]);
}