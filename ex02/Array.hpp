/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:08:58 by okraus            #+#    #+#             */
/*   Updated: 2024/05/30 15:08:12 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ARRAY_HPP
# define ARRAY_HPP

//# include <cstddef>
# include <iostream>

template <typename T> class Array
{
	public:
		Array(void);
		Array(size_t size);
		Array(const Array& copy);
		Array &operator	= (const Array &src);
		~Array(void);

		T &operator		[] (size_t i);

		size_t	size(void) const;
		void	printArr(void) const;
	
	private:
		T*		_arr;
		size_t	_size;
};

# include "Array.tpp"

#endif