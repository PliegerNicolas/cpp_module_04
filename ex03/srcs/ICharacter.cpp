/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 12:23:58 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/30 17:53:35 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ICharacter.hpp"

ICharacter::~ICharacter(void)
{
	std::cout << "\033[37m" << "Character : Destructor called";
	std::cout << "\033[0m" << std::endl;
}

// Interface. Empty file. No implementation details.
