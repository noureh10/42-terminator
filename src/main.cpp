/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:16:39 by nechaara          #+#    #+#             */
/*   Updated: 2024/07/21 02:11:57 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ITester.hpp"
#include "includes/NullChecker.hpp"
#include "includes/PushSwapChecker.hpp"
#include "includes/MinitalkChecker.hpp"
#include "Macros.hpp"

static void errorMessage(std::string error_message) {
	std::cerr << RED << error_message << CRESET << std::endl;
}

static void basicPrompt(std::string message) {
	std::cerr << message << CRESET << std::endl;
}

static bool areStringEquals(std::string &a, std::string &b) {
	return a == b;
}

int main(int ac, char **av) {
	std::string		prompt;
	bool			valid_prompt;
	unsigned int	prompt_size;
	unsigned int	selection;
	ITester			*tester;

	valid_prompt = false;
	tester = 0;
	do {
		std::cin >> prompt;
		if (std::cin.eof())
			errorMessage(BAD_INPUT);
		prompt_size = prompt.size();
		selection = atoi(prompt.c_str());
		if (prompt_size && (selection <= 3)) {
			valid_prompt = true;
			switch (selection) {
				case NULL_CHECKER:
					tester = new NullChecker();
					break;
				case PUSH_SWAP:
					tester = new PushSwapChecker();
					break;
				case MINITALK:
					tester = new MinitalkChecker();
					break;
				default:
					valid_prompt = false;
					errorMessage(SELECTION_MISMATCH);
			}
			
		} else {
			errorMessage(WRONG_SELECTION);
		}
		
	} while (!valid_prompt);
	
}