/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:04:38 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/13 12:59:32 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class	AAnimal
{
	public:
		/* Attributes */

		/* Constructors & Destructors */


		AAnimal(void);
		AAnimal(const std::string type);

		AAnimal(const AAnimal &other);
		AAnimal	&operator=(const AAnimal &other);

		virtual ~AAnimal(void) = 0;

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
