/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 13:04:12 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/30 17:53:04 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "IMateriaSource.hpp"

IMateriaSource::~IMateriaSource(void)
{
	std::cout << "\033[37m" << "IMateriaSource : Destructor called";
	std::cout << "\033[0m" << std::endl;
}

// Interface. Empty file. No implementation details.
