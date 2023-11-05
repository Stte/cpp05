#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}
Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = other.grade;
	return (*this);
}

std::string Bureaucrat::getName()
{
	return (this->name);
}

int Bureaucrat::getGrade()
{
	return (this->grade);
}

void Bureaucrat::promote()
{
	this->grade--;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::demote()
{
	this->grade++;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

// std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
// {
// 	os << b.getName() << ", bureaucrat grade " << b.getGrade() << "."
// }

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
