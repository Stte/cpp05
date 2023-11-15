/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:29:02 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/15 17:04:37 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern
{
public:
	Intern();
	~Intern();
	AForm *makeForm(std::string formName, std::string target);

private:
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);

	AForm *shrubberyCreator(std::string target) const;
	AForm *robotomyCreator(std::string target) const;
	AForm *presidentialCreator(std::string target) const;
};

typedef AForm *(Intern::*FormFactory)(std::string target) const;

#endif
