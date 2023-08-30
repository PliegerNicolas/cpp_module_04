/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 13:04:12 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/30 22:55:19 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "IMateriaSource.hpp"

IMateriaSource::~IMateriaSource(void)
{
	if (!DEBUG)
		return ;
	std::cout << "\033[37m" << "IMateriaSource : Destructor called";
	std::cout << "\033[0m" << std::endl;
}

// Interface. Empty file. No implementation details.
