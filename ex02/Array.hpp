/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 18:34:53 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/07 17:04:35 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

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
		class IndexOutofRangeException : public std::exception
		{
			public :
			virtual const char* what() const throw();
		};
    private:
        T* _array;
        unsigned int _size;
};

#include "Array.tpp"