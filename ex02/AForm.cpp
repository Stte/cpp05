#include "AForm.hpp"

AForm::AForm(std::string name,
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
AForm::~AForm()
{
}
AForm::AForm(const AForm &other) : name(other.name),
								   isSigned(other.isSigned),
								   signGrade(other.signGrade),
								   execGrade(other.execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}
AForm &AForm::operator=(const AForm &other)
{
	this->isSigned = other.isSigned;
	return (*this);
}

std::string AForm::getName() const
{
	return (this->name);
}
bool AForm::getIsSigned() const
{
	return (this->isSigned);
}
int AForm::getSignGrade() const
{
	return (this->signGrade);
}
int AForm::getExecGrade() const
{
	return (this->execGrade);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->signGrade)
		throw GradeTooLowException();
	this->isSigned = true;
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();
	execute_action();
}

std::ostream &operator<<(std::ostream &os, const AForm &f)
{
	os << "AForm name: " << f.getName()
	   << "\nIs signed: " << f.getIsSigned()
	   << "\nSign grade: " << f.getSignGrade()
	   << "\nExecute grade: " << f.getExecGrade();
	return os;
}
