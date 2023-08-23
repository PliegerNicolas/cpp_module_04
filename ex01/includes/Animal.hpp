/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:04:38 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/12 21:12:58 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal
{
	public:
		/* Attributes */

		/* Constructors & Destructors */


		Animal(void);
		Animal(const std::string type);

		Animal(const Animal &other);
		Animal	&operator=(const Animal &other);

		virtual ~Animal(void);

		/* Member functions */

		virtual	void	makeSound(void) const;

		// Getter functions

		const std::string	getType(void) const;

		// Setter functions

		void	setType(const std::string type);

		/* Overloaded operators */

	protected:
		/* Attributes */
		std::string	_type;

		/* Constructors & Destructors */

		/* Member functions */

	private:
		/* Attributes */

		/* Constructors & Destructors */

		/* Member functions */
};

#endif
