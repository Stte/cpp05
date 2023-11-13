/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:22:01 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/13 14:23:21 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
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
	int getGrade() const;
	void promote();
	void demote();
	void signForm(Form &form);

private:
	const std::string name;
	int grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);
#endif
