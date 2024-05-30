/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:08:58 by okraus            #+#    #+#             */
/*   Updated: 2024/05/30 15:37:34 by okraus           ###   ########.fr       */
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

template <typename T> Array<T>::Array(size_t size)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Size_t constructor of the Array class called.";
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
	for (size_t i = 0; i < copy._size; i++)
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
		for (size_t i = 0; i < src.size; i++)
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

template <typename T> T& Array<T>::operator [] (size_t i)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "[] Operator of the Array class called.";
	ft_uncolorize();
	std::cout << std::endl;
	if (i >= _size)
		throw (std::exception());
	return (this->_arr[i]);
}

template <typename T> size_t Array<T>::size(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "size of the Array class called.";
	ft_uncolorize();
	std::cout << std::endl;
	return (this->_size);
}

template <typename T> void Array<T>::printArr(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "size of the Array class called.";
	
	for (size_t i = 0; i < this->_size; i++)
		(i == this->_size - 1)	? std::cout << this->_arr[i]
								: std::cout << this->_arr[i] << " ";
	ft_uncolorize();
	std::cout << std::endl;
}
