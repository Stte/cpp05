#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	if (grade < 0)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}
Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
	if (grade < 0)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	// hahaha yeah right.
	// this->name = bureaucrat.name;
	this->grade = other.grade;
	return (*this);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:39:21 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/03 16:39:23 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
