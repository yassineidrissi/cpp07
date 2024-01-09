/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 00:50:41 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/09 18:12:35 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename E>

const char *Array<E>::IndexOutofRangeException::what() const throw()
{
	return ("Index out of range");
}


template <typename T>

Array<T>::Array()
{
	_array = new T();
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
	this->_size = other._size;
	this->_array = new N[this->_size];
	for(unsigned int i = 0; i < _size; i++)
		this->_array[i] = other._array[i];
	std::cout << "copy assignment operator" << std::endl;
}

template <typename N>


N& Array<N>::operator[](unsigned int index)
{
	if(index >= _size)
	{
		throw IndexOutofRangeException();
	}
	return (this->_array[index]);
}
template <typename N>

const N& Array<N>::operator[](unsigned int index) const
{
	if(index >= _size)
	{
		throw IndexOutofRangeException();
	}
	return (this->_array[index]);
}