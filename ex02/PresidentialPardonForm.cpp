/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:51:50 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/15 16:25:07 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5),
																	 target(target)
{
}
PresidentialPardonForm::~PresidentialPardonForm() {}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm("PresidentialPardonForm", 25, 5),
																					  target(other.target)
{
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	this->target = other.target;
	return (*this);
}

void PresidentialPardonForm::execute_action() const
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
