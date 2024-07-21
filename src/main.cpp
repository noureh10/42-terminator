/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:16:39 by nechaara          #+#    #+#             */
/*   Updated: 2024/07/21 18:40:52 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ITester.hpp"
#include "includes/Macros.hpp"
#include "includes/NullChecker.hpp"
#include "includes/PushSwapChecker.hpp"
#include "includes/MinitalkChecker.hpp"

static void errorMessage(std::string error_message) {
	std::cerr << RED << error_message << CRESET << std::endl;
}

static void basicPrompt(std::string message) {
	std::cerr << message << CRESET << std::endl;
}

static bool areStringEquals(std::string &a, std::string &b) {
	return a == b;
}

static bool selectionMenu(void) {
	std::cout << "42 - Terminator\n" << std::endl;
	std::cout << "Please pick the tester you would like to use :" << std::endl;
	std::cout << CYAN  << "\n1. Null Checker" << std::endl;
	std::cout << "2. Push Swap Checker" << std::endl;
	std::cout << "3. Minitalk" << CRESET << std::endl;
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
		selectionMenu();
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
				case QUIT_PROGRAM:
					return 0;
				default:
					valid_prompt = false;
					errorMessage(SELECTION_MISMATCH);
			}
		} else {
			errorMessage(WRONG_SELECTION);
		}
	} while (!valid_prompt);
}