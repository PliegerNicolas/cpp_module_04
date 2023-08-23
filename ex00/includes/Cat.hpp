/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:28:06 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/12 20:50:01 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat: public Animal
{
	public:
		/* Attributes */

		/* Constructors & Destructors */

		Cat(void);
		Cat(const std::string type);

		Cat(const Cat &other);
		Cat	&operator=(const Cat &other);

		~Cat(void);

		/* Member functions */

		void	makeSound(void) const;

		// Getter functions

		// Setter functions

		/* Overloaded operators */

	protected:
		/* Attributes */

		/* Constructors & Destructors */

		/* Member functions */

	private:
		/* Attributes */

		/* Constructors & Destructors */

		/* Member functions */
};

#endif
