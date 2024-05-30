/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:08:58 by okraus            #+#    #+#             */
/*   Updated: 2024/05/30 16:58:43 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "colours.hpp"

template <typename T> Array<T>::Array(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Default constructor of the Array class called.";
	ft_uncolorize();
	std::cout << std::endl;
	this->_arr = NULL;
	this->_size = 0;
}

template <typename T> Array<T>::Array(unsigned int size)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "unsigned int constructor of the Array class called.";
	ft_uncolorize();
	std::cout << std::endl;
	this->_arr = new T[size];
	this->_size = size;
}

template <typename T> Array<T>::Array(const Array& copy)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy constructor of the Array class called.";
	ft_uncolorize();
	std::cout << std::endl;
	this->_arr = new T[copy._size];
	this->_size = copy._size;
	for (unsigned int i = 0; i < copy._size; i++)
		this->_arr[i] = copy._arr[i];
}

template <typename T> Array<T> &Array<T>::operator = (const Array &src)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Assigment operator of the Array class called.";
	ft_uncolorize();
	std::cout << std::endl;
	if (this != *src)
	{
		this->_arr = new T[src._size];
		this->_size = src._size;
		for (unsigned int i = 0; i < src.size; i++)
			this->_arr[i] = src._arr[i];
	}
	return (*this);
}

template <typename T> Array<T>::~Array(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Destructor of the Array class called.";
	ft_uncolorize();
	std::cout << std::endl;
	delete[] this->_arr;
}

template <typename T> T& Array<T>::operator [] (unsigned int i)
{
// 	ft_colorize(reinterpret_cast<uintptr_t>(this));
// 	std::cout << "[] Operator of the Array class called.";
// 	ft_uncolorize();
// 	std::cout << std::endl;
	if (i >= _size)
		throw (IndexOutOfBoundsException());
	return (this->_arr[i]);
}

template <typename T> unsigned int Array<T>::size(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "size of the Array class called.";
	ft_uncolorize();
	std::cout << std::endl;
	return (this->_size);
}

template <typename T> void Array<T>::putArr(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	for (unsigned int i = 0; i < this->_size; i++)
		(i == this->_size - 1)	? std::cout << this->_arr[i]
								: std::cout << this->_arr[i] << " ";
	ft_uncolorize();
	std::cout << std::endl;
}

template <typename T> const char* Array<T>::IndexOutOfBoundsException::what() const throw()
{
	return (ERROR_COLOUR "Index out of bounds." NO_COLOUR);
}

