/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:08:58 by okraus            #+#    #+#             */
/*   Updated: 2024/05/25 16:38:04 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T> void iter(T *arr, size_t size, void (*f)(T&))
{
	for (size_t element = 0; element < size; ++element)
		f(arr[element]);
}

//just to check if array was affected and print easily everything
template <typename T> void printArr(T *arr, size_t size)
{
	for (size_t element = 0; element < size; ++element)
		std::cout << "[" << arr[element] << "], ";
}

#endif