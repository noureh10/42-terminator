/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ITester.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 23:42:29 by nechaara          #+#    #+#             */
/*   Updated: 2024/07/20 22:31:38 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITESTER_HPP
# define ITESTER_HPP

# include <iostream>
# include <string>

class ITester
{
	public:
		virtual ~ITester() {};
		virtual void initialize() = 0;
		virtual void runTests() = 0;
		virtual void cleanup() = 0;
		virtual std::string getResults() const = 0;
};
#endif