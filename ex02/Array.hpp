/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 18:34:53 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/07 01:44:55 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array<T>& other);
		Array& operator=(const Array<T> &other);
		T& operator[](unsigned int index);
    private:
        T* _array;
        unsigned int _size;
};

#include "Array.tpp"