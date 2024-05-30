/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:08:58 by okraus            #+#    #+#             */
/*   Updated: 2024/05/30 16:54:15 by okraus           ###   ########.fr       */
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
		Array(unsigned int size);
		Array(const Array& copy);
		Array &operator	= (const Array &src);
		~Array(void);

		T &operator		[] (unsigned int i);

		unsigned int	size(void) const;
		void			putArr(void) const;
		class IndexOutOfBoundsException : public std::exception
		{
			public:
				const char*		what() const throw();
		};
	
	private:
		T*				_arr;
		unsigned int	_size;
};

# include "Array.tpp"

#endif