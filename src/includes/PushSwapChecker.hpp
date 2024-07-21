/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PushSwapChecker.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 02:04:53 by nechaara          #+#    #+#             */
/*   Updated: 2024/07/21 18:22:59 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAPCHECKER_HPP
# define PUSHSWAPCHECKER_HPP

# include "ITester.hpp"
# include <iostream>
# include <string>

class PushSwapChecker : public ITester
{
	public:
		void initialize() override;
		void runTests() override;
		void cleanup() override;
		std::string getResults() const override;
};

#endif