/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:28:06 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/13 12:49:41 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat: public AAnimal
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

		Brain	getBrain(void) const;

		// Setter functions

		/* Overloaded operators */

	protected:
		/* Attributes */

		/* Constructors & Destructors */

		/* Member functions */

	private:
		/* Attributes */
		Brain	*_brain;

		/* Constructors & Destructors */

		/* Member functions */
};

#endif
