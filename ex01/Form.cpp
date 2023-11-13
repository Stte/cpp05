/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:09:33 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/13 15:21:34 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name,
		   int signGrade,
		   int execGrade) : name(name),
							isSigned(false),
							signGrade(signGrade),
							execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}
Form::~Form()
{
}
Form::Form(const Form &other) : name(other.name),
								isSigned(other.isSigned),
								signGrade(other.signGrade),
								execGrade(other.execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}
Form &Form::operator=(const Form &other)
{
	this->isSigned = other.isSigned;
	return (*this);
}

std::string Form::getName() const
{
	return (this->name);
}
bool Form::getIsSigned() const
{
	return (this->isSigned);
}
int Form::getSignGrade() const
{
	return (this->signGrade);
}
int Form::getExecGrade() const
{
	return (this->execGrade);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->signGrade)
		throw GradeTooLowException();
	this->isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
	os << "Form name: " << f.getName()
	   << "\nIs signed: " << f.getIsSigned()
	   << "\nSign grade: " << f.getSignGrade()
	   << "\nExecute grade: " << f.getExecGrade();
	return os;
}
