/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:19:29 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/15 17:29:17 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
	Bureaucrat axel("Axel", 1);
	Bureaucrat scrub("Scrub", 150);
	Intern someRandomIntern;

	AForm *shrub = someRandomIntern.makeForm("shrubbery creation", "Bed");
	AForm *rob = someRandomIntern.makeForm("robotomy request", "is");
	AForm *pres = someRandomIntern.makeForm("presidential pardon", "a");
	AForm *nope = someRandomIntern.makeForm("nope", "place");

	scrub.signForm(*shrub);
	axel.executeForm(*shrub);
	axel.signForm(*shrub);
	scrub.executeForm(*shrub);
	axel.executeForm(*shrub);
	std::cout << "-----------" << std::endl;
	scrub.signForm(*rob);
	axel.executeForm(*rob);
	axel.signForm(*rob);
	scrub.executeForm(*rob);
	axel.executeForm(*rob);
	std::cout << "-----------" << std::endl;
	scrub.signForm(*pres);
	axel.executeForm(*pres);
	axel.signForm(*pres);
	scrub.executeForm(*pres);
	axel.executeForm(*pres);

	delete (shrub);
	delete (rob);
	delete (pres);
	delete (nope);
}
