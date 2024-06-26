/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 12:23:58 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/30 22:55:09 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ICharacter.hpp"

ICharacter::~ICharacter(void)
{
	if (!DEBUG)
		return ;
	std::cout << "\033[37m" << "Character : Destructor called";
	std::cout << "\033[0m" << std::endl;
}

// Interface. Empty file. No implementation details.
