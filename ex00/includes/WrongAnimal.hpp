/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 21:14:55 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/12 21:18:27 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal
{
	public:
		/* Attributes */

		/* Constructors & Destructors */


		WrongAnimal(void);
		WrongAnimal(const std::string type);

		WrongAnimal(const WrongAnimal &other);
		WrongAnimal	&operator=(const WrongAnimal &other);

		virtual ~WrongAnimal(void);

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
