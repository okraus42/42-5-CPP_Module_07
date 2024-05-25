/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:52:35 by okraus            #+#    #+#             */
/*   Updated: 2024/05/25 16:37:12 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"
#include "colours.hpp"

void	triple(int &num)
{
	num *= 3;
}

void	swapcase(std::string &str)
{
	for (size_t i = 0; i < str.length(); ++i)
		if (std::isalpha(str[i]))
			str[i] ^= 32;
}

int	main(void)
{
	int			ints[] = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::string	strings[] = {"Hello", "World", "4ever"};

	std::cout << "Print ints:" << std::endl;
	::printArr(ints, 12);
	std::cout << std::endl << std::endl;
	std::cout << "Triple ints:" << std::endl;
	::iter(ints, 12, triple);
	::printArr(strings, 3);
	std::cout << std::endl << std::endl;
	std::cout << "Print strings:" << std::endl;
	::printArr(strings, 3);
	std::cout << std::endl << std::endl;
	std::cout << "swap case strings:" << std::endl;
	::iter(strings, 3, swapcase);
	::printArr(strings, 3);
	std::cout << std::endl << std::endl;
	return (0);
}