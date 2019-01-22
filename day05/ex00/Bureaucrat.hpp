//
// Created by Dmitry ZABROTSKY on 2019-01-21.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {

private:
	std::string const _name;
	int			const _grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &obj);

	std::string getName() const;
	int			getGrade() const;

	Bureaucrat &operator=(Bureaucrat const &obj);

	class GradeTooHighException : public std::exception {
		GradeTooHighException();
		GradeTooHighException(GradeTooHighException const &obj);
		~GradeTooHighException();

		GradeTooHighException &operator=(GradeTooHighException const &obj);
	};

	class GradeTooLowException : public std::exception {
		GradeTooLowException();
		GradeTooLowException(GradeTooLowException const &obj);
		~GradeTooLowException();

		GradeTooLowException &operator=(GradeTooLowException const &obj);
	};

	std::ostream &operator<<(std::ostream &os, Bureaucrat const &obj);

};


#endif
