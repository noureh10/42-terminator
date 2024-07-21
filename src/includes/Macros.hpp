/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Macros.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 23:45:15 by nechaara          #+#    #+#             */
/*   Updated: 2024/07/21 01:13:15 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_HPP
# define COLORS_HPP

# define CRESET "\x1b[0m"
# define BOLD "\x1b[1m"
# define RED "\x1b[31m"
# define GREEN "\x1b[32m"
# define YELLOW "\x1b[33m"
# define BLUE "\x1b[34m"
# define MAGENTA "\x1b[35m"
# define CYAN "\x1b[36m"
# define WHITE "\x1b[37m"
# define BLACK "\033[30m"
// TEST TYPES
# define NULL_CHECKER 1
# define PUSH_SWAP 2
# define MINITALK 3
// ERRORS 
# define BAD_INPUT "Input interrupted, exiting."
# define WRONG_SELECTION "Please select a number associated with one of the testers"
# define SELECTION_MISMATCH "Selection does not concord to any options"


#endif