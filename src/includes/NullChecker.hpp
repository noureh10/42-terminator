/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NullChecker.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 23:40:19 by nechaara          #+#    #+#             */
/*   Updated: 2024/07/19 23:42:17 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NULLCHECKER_HPP
# define NULLCHECKER_HPP

# include <ITester.hpp>
# include <iostream>
# include <string>

class NullChecker : public ITester
{
	public:
		void initialize() override;
		void runTests() override;
		void cleanup() override;
		std::string getResults() const override;
};

#endif