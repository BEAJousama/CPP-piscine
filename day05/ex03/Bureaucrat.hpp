/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:05:14 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/08 18:27:55 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string name;
        int grade;
    public:
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(std::string name , int grade);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat& operator=(const Bureaucrat &obj);
        
        std::string getName() const;
        int         getGrade() const;
        void        GradeIncrement();
        void        GradeDecrement();
        void        signForm(Form &f);
        void        executeForm(Form const & form);
};
std::ostream& operator<<(std::ostream& os, Bureaucrat& obj);
#endif