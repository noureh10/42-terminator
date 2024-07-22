/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara.student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:16:39 by nechaara          #+#    #+#             */
/*   Updated: 2024/07/22 18:10:31 by nechaara         ###   ########.fr       */
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

static void basicPrompt(std::string message, const char *color) {
	std::cerr << color << message << CRESET << std::endl;
}

static void displayLogo(void) {
	basicPrompt("      __   ___ __ __             ___ __  __  ", RED);
	basicPrompt(" |__|  _)   | |_ |__)|\\/|||\\ | /\\ | /  \\|__) ", RED);
	basicPrompt("    | /__   | |__| \\ |  ||| \\|/--\\| \\__/| \\  \n", RED);
}

static void selectionMenu(void) {
	std::cout << "Please pick the tester you would like to use :\n" << std::endl;
	std::cout << CYAN  << "1. Null Checker" << std::endl;
	std::cout << "2. Push Swap Checker" << std::endl;
	std::cout << "3. Minitalk" << std::endl;
	std::cout << "4. Exit program\n" << CRESET << std::endl;
}

int main(void) {
	std::string		prompt;
	unsigned int	prompt_size;
	unsigned int	selection;
	ITester			*tester;

	tester = 0;
	displayLogo();
	do {
		selectionMenu();
		std::cin >> prompt;
		if (std::cin.eof())
		{
			errorMessage(BAD_INPUT);
			return (EXIT_FAILURE);
		}
		prompt_size = prompt.size();
		selection = atoi(prompt.c_str());
		if (prompt_size && (selection <= 4)) {
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
					return (EXIT_FAILURE);
				default:
					errorMessage(SELECTION_MISMATCH);
			}
		} else {
			errorMessage(WRONG_SELECTION);
		}
		if (tester) {
			tester->initialize();
			tester->runTests();
			tester->getResults();
			tester->cleanup();
		}
	} while (true);
	return (EXIT_SUCCESS);
}
