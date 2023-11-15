/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:13:42 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/15 15:48:55 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45),
															   target(target)
{
}
RobotomyRequestForm::~RobotomyRequestForm() {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm("RobotomyRequestForm", 72, 45),
																			 target(other.target)
{
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	this->target = other.target;
	return (*this);
}

void RobotomyRequestForm::execute_action() const
{
	srand(time(NULL));
	std::cout << "*Makes some drilling noises*" << std::endl;
	if (rand() % 2)
		std::cout << this->target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Robotomy failed." << std::endl;
}
