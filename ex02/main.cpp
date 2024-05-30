/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:36:16 by okraus            #+#    #+#             */
/*   Updated: 2024/05/30 17:02:16 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib> 
#include "Array.hpp"

#define MAX_VAL 75
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	std::cout << "NUMBERS" << std::endl;
	numbers.putArr();
	std::cout << std::endl;
	std::cout << "Mirror" << std::endl;
	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
		std::cout << mirror[i] << " ";
	}
	std::cout << std::endl;
	//SCOPE
	{
		std::cout << "Array<int> tmp = numbers" << std::endl;
		Array<int> tmp = numbers;
		std::cout << "Array<int> test(tmp)" << std::endl;
		Array<int> test(tmp);
	}

	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		std::cout << "numbers[-2] = 0" << std::endl;
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "numbers[MAX_VAL] = 0" << std::endl;
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	std::cout << "NUMBERS" << std::endl;
	numbers.putArr();
	std::cout << std::endl;
	delete [] mirror;//
	return 0;
}