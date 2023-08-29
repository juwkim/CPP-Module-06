/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 01:32:54 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/29 18:59:04 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void)
{
}

Base* generate(void)
{
	switch (std::rand() % 3)
	{
		case 0: return (new A());
		case 1: return (new B());
		case 2: return (new C());
	}
	return NULL;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << 'A';
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << 'B';
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << 'C';
}

void identify(Base& p)
{
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << 'A';
		return;
	} catch(const std::exception& e) {
	}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << 'B';
		return;
	} catch(const std::exception& e) {
	}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << 'C';
		return;
	} catch(const std::exception& e) {
	}
}
