/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:19:29 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/13 15:23:29 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat axel("Axel", 1);
	std::cout << axel.getName() << "'s grade is " << axel.getGrade() << std::endl;
	Form test1("Test #1", 42, 42);

	std::cout << "\n"
			  << test1 << "\n"
			  << std::endl;
	axel.signForm(test1);
	axel.signForm(test1);
	std::cout << "\n"
			  << test1 << "\n"
			  << std::endl;

	Bureaucrat jorma("Jorma", 50);
	std::cout << jorma.getName() << "'s grade is " << jorma.getGrade() << std::endl;
	Form test2("Test #2", 42, 42);
	try
	{
		jorma.signForm(test2);
	}
	catch (std::exception &e)
	{
		std::cout << "Caught a fish: " << e.what() << std::endl;
	}
}
