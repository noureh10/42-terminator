/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MinitalkChecker.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 02:09:20 by nechaara          #+#    #+#             */
/*   Updated: 2024/07/21 18:22:47 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALKCHECKER_HPP
# define MINITALKCHECKER_HPP

# include "ITester.hpp"
# include <iostream>
# include <string>

class MinitalkChecker : public ITester
{
	public:
		void initialize() override;
		void runTests() override;
		void cleanup() override;
		std::string getResults() const override;
};

#endif