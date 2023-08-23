/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:17:48 by nplieger          #+#    #+#             */
/*   Updated: 2023/06/13 11:53:37 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class	Brain
{
	public:
		/* Attributes */

		/* Constructors & Destructors */


		Brain(void);

		Brain(const Brain &other);
		Brain	&operator=(const Brain &other);

		virtual ~Brain(void);

		/* Member functions */

		void	printIdeas(size_t start, size_t end) const;

		// Getter functions
		const std::string	getIdea(size_t i) const;


		// Setter functions

		void	setIdea(size_t i, std::string str);

		/* Overloaded operators */

	protected:
		/* Attributes */

		/* Constructors & Destructors */

		/* Member functions */

	private:
		/* Attributes */
		std::string	_ideas[100];

		/* Constructors & Destructors */

		/* Member functions */
};

#endif
