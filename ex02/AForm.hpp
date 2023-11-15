/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:10:03 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/15 14:31:20 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
public:
	AForm(std::string name, int signGrade, int execGrade);
	virtual ~AForm();
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
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
	class FormNotSignedException : public std::runtime_error
	{
	public:
		FormNotSignedException() : runtime_error("Form not signed!"){};
	};
	std::string getName() const;
	bool getIsSigned() const;
	int getSignGrade() const;
	int getExecGrade() const;

	void beSigned(Bureaucrat &bureaucrat);
	void execute(Bureaucrat const &executor) const;

protected:
	virtual void execute_action() const = 0;

private:
	const std::string name;
	bool isSigned;
	const int signGrade;
	const int execGrade;
};

std::ostream &operator<<(std::ostream &os, const AForm &b);

#endif
