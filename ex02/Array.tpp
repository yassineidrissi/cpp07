/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 00:50:41 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/07 12:39:18 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>

Array<T>::Array()
{
	_array = new T[0];
	_size = 0;
	std::cout << "Array constructor" << std::endl;	
}

template <typename T>

Array<T>::~Array()
{
	delete[] _array;
	std::cout << "Array dustractors" << std::endl;	
}

template <typename T>

Array<T>::Array(unsigned int n)
{
	_array = new T[n];
	_size = n;
	std::cout << "Array constructor int n" << std::endl;	
}

template <typename N>

Array<N>::Array(const Array<N>& other)
{
	(void) other;
	std::cout << "Array::Array(const Array<N>& other" << std::endl;
}

template <typename N>

Array<N>& Array<N>::operator=(const Array<N> &other)
{
	(void) other;
	std::cout << "Array::operator=(const Array<N> &other)" << std::endl;
	return (*this);
}

template <typename N>

N& Array<N>::operator[](unsigned int index)
{
	(void) index;
	std::cout << "Array::operator[](unsigned int index)" << std::endl;
	return (*this);
}

// template <typename T>
// Array<T>::Array(const Array<T>& other)
// {
// 	_size = other._size;
// 	_array = new T[_size];
// 	for (unsigned int i = 0; i < _size; ++i)
// 		_array[i] = other._array[i];
// 	std::cout << "Array copy constructor" << std::endl;
// }

// template <typename T>
// Array<T>& Array<T>::operator=(const Array<T>& other)
// {
// 	if (this != &other)
// 	{
// 		delete[] _array;
// 		_size = other._size;
// 		_array = new T[_size];
// 		for (unsigned int i = 0; i < _size; ++i)
// 			_array[i] = other._array[i];
// 	}
// 	std::cout << "Array assignment operator" << std::endl;
// 	return *this;
// }