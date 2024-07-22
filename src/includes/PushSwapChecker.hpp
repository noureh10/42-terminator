/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PushSwapChecker.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara.student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 02:04:53 by nechaara          #+#    #+#             */
/*   Updated: 2024/07/22 18:51:58 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAPCHECKER_HPP
# define PUSHSWAPCHECKER_HPP

# include "ITester.hpp"
# include <iostream>
# include <string>

typedef struct s_stack
{
	struct s_stack	*nxt;
	struct s_stack	*prv;
}	t_stack;

class PushSwapChecker : public ITester
{
	private:
		t_stack *a;
		t_stack *b;
		bool	isStackSorted(t_stack *head);
		t_stack	*initStack(std::string input);
		void	pa(t_stack *b, t_stack *a);
		void	pb(t_stack *a, t_stack *b);
		void	ro(t_stack *stack);
		void	rr(t_stack *stack);
		void	sw(t_stack *stack);
	public:
		void initialize() override;
		void runTests() override;
		void cleanup() override;
		void getResults() const override;
};

#endif