/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 00:50:41 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/06 01:43:30 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>

Array<T>::Array()
{
	_array = NULL;
	std::cout << "Array constructor" << std::endl;	
}

template <typename T>

Array<T>::~Array()
{
	delete _array;
	std::cout << "Array dustractors" << std::endl;	
}

template <typename T>

Array<T>::Array(unsigned int n)
{
	_array = new Array<T>(n);
	_size = n;
	std::cout << "Array constructor int n" << std::endl;	
}

template <typename N>

Array<N>::Array(const Array<N>& other)
{
	(void) other;
	std::cout << "Array::Array(const Array<N>& other" << std::endl;
}

