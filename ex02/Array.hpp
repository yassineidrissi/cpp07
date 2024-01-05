/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 18:34:53 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/05 01:09:39 by yaidriss         ###   ########.fr       */
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
}


// #pragma once

// #include <iostream>

// template <typename T>
// class Array
// {
//     public:
//         Array();
//         ~Array();
//         Array(unsigned int n);
//         Array(const Array<T>& other);
//         Array& operator=(const Array<T>& other);
//         T& operator[](unsigned int index);

//     private:
//         T* _array;
//         unsigned int _size;
// };

// #include "Array.tpp"