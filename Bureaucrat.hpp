#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

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

	std::string getName();
	int getGrade();
	void promote();
	void demote();

private:
	const std::string name;
	int grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:40:01 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/03 16:40:01 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
