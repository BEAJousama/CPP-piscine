/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:05:17 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/01 15:01:49 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat a("bureaucrat_1", 3);
        Bureaucrat c = a;
        PresidentialPardonForm p1("target1");
        p1.beSigned(a);
        a.signForm(p1);
        p1.execute(a);
    }
    catch (std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b("bureaucrat_2", 3);
        Bureaucrat c = b;
        ShrubberyCreationForm s1("target2");
        s1.beSigned(b);
        b.signForm(s1);
        s1.execute(b);
    }
    catch (std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat c("bureaucrat_3", 3);
        Bureaucrat d("bureaucrat_4", 46);
        RobotomyRequestForm r1("target3");
        r1.beSigned(c);
        c.signForm(r1);
        r1.execute(c);
        d.executeForm(r1);
    }
    catch (std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}