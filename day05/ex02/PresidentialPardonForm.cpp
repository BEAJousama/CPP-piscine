/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:46:32 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/01 13:59:38 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Form("Presedential pardon",25,5)
{
	this->target = "Default target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presedential pardon",25,5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ): Form(src.getName(), src.getGradeToSign(), src.getGradeToExec())
{
	this->setTarget(src.getTarget());
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if (this == &rhs)
		return *this;
	this->isSigned = rhs.isItSigned();
	this->target = rhs.getTarget();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::action() const
{
	std::cout << this->getTarget() << " has been officially pardoned by Zafod Beeblebrox" << std::endl;
}

/* ************************************************************************** */