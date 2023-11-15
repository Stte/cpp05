/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:19:29 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/15 16:24:33 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat axel("Axel", 1);
	Bureaucrat scrub("Scrub", 150);
	ShrubberyCreationForm shrub("Home");
	RobotomyRequestForm rob("Dean");
	PresidentialPardonForm pres("Rasmus");

	scrub.signForm(shrub);
	axel.executeForm(shrub);
	axel.signForm(shrub);
	scrub.executeForm(shrub);
	axel.executeForm(shrub);
	std::cout << "-----------" << std::endl;
	scrub.signForm(rob);
	axel.executeForm(rob);
	axel.signForm(rob);
	scrub.executeForm(rob);
	axel.executeForm(rob);
	std::cout << "-----------" << std::endl;
	scrub.signForm(pres);
	axel.executeForm(pres);
	axel.signForm(pres);
	scrub.executeForm(pres);
	axel.executeForm(pres);
}
