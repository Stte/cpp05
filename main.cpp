#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat jorma("Jorma", 1);
	std::cout << jorma.getName() << "  " << jorma.getGrade() << std::endl;

	Bureaucrat kalle("Kalle", 150);
	std::cout << kalle.getName() << "  " << kalle.getGrade() << std::endl;

	try
	{
		Bureaucrat jyrki("Jyrki", 0);
	}
	catch (std::exception &e)
	{
		std::cout << "Caught a fish: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat klaus("Klaus", 151);
	}
	catch (std::exception &e)
	{
		std::cout << "Caught a fish: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat pasi("Pasi", 1);
		pasi.promote();
	}
	catch (std::exception &e)
	{
		std::cout << "Caught a fish: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat petteri("Petteri", 150);
		petteri.demote();
		std::cout << petteri.getName() << "  " << petteri.getGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught a fish: " << e.what() << std::endl;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:19:29 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/03 17:19:29 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
