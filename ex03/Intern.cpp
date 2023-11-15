/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:34:42 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/15 17:31:46 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}
Intern::~Intern() {}

AForm *Intern::shrubberyCreator(std::string target) const
{
	return (new ShrubberyCreationForm(target));
}
AForm *Intern::robotomyCreator(std::string target) const
{
	return (new RobotomyRequestForm(target));
}
AForm *Intern::presidentialCreator(std::string target) const
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	static const int formCount = 3;
	static const std::string forms[] = {"shrubbery creation",
										"robotomy request",
										"presidential pardon"};
	static const FormFactory creators[] = {&Intern::shrubberyCreator,
										   &Intern::robotomyCreator,
										   &Intern::presidentialCreator};
	for (int i = 0; i < formCount; i++)
	{
		if (formName.compare(forms[i]) == 0)
		{
			std::cout << "Intern creates " << formName << " form." << std::endl;
			return ((this->*creators[i])(target));
		}
	}
	std::cout << "Intern couldn't create " << formName << " form. Form doesn't exist." << std::endl;
	return (NULL);
}
