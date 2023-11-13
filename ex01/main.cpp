/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:19:29 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/13 15:03:28 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat axel("Axel", 1);
	std::cout << axel.getName() << "'s grade is " << axel.getGrade() << std::endl;
	Form test1("Test #1", 42, 42);

	std::cout << test1 << std::endl;
	test1.beSigned(axel);
	test1.beSigned(axel);
	std::cout << test1 << std::endl;

	Bureaucrat jorma("Jorma", 50);
	std::cout << jorma.getName() << "'s grade is " << jorma.getGrade() << std::endl;
	Form test2("Test #2", 42, 42);
	try
	{
		test2.beSigned(jorma);
	}
	catch (std::exception &e)
	{
		std::cout << "Caught a fish: " << e.what() << std::endl;
	}
}
