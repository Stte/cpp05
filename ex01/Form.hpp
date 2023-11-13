/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:10:03 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/13 15:03:14 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form(std::string name, int signGrade, int execGrade);
	~Form();
	Form(const Form &other);
	Form &operator=(const Form &other);
	class GradeTooHighException : public std::runtime_error
	{
	public:
		GradeTooHighException() : runtime_error("Grade too high!"){};
	};
	class GradeTooLowException : public std::runtime_error
	{
	public:
		GradeTooLowException() : runtime_error("Grade too low!"){};
	};
	std::string getName() const;
	bool getIsSigned() const;
	int getSignGrade() const;
	int getExecGrade() const;

	void beSigned(Bureaucrat &bureaucrat); // changes the form status to signed if the bureaucrat’s grade is high enough

private:
	const std::string name;
	bool isSigned;
	const int signGrade;
	const int execGrade;
};

std::ostream &operator<<(std::ostream &os, const Form &b);

#endif
