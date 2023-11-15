/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:19:46 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/15 15:56:39 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137),
																   target(target)
{
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm("ShrubberyCreationForm", 145, 137),
																				   target(other.target)
{
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	this->target = other.target;
	return (*this);
}

void ShrubberyCreationForm::execute_action() const
{
	std::ofstream outfile;

	outfile.open(this->target + "_shrubbery");
	outfile << " _ \n| |\n| |_ _ __ ___  ___ \n| __| '__/ _ \\/ _ \\ \n| |_| | |  __/  __/ \n \\__|_|  \\___|\\___|"
			<< std::endl;
	outfile << std::endl;
	outfile << "       ### \n      #o### \n    #####o### \n   #o#\\#|#/### \n    ###\\|/#o# \n     # }|{  # \n       }|{ \n"
			<< std::endl;
	outfile.close();
}
