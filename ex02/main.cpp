/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 01:25:27 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/29 01:40:47 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	std::srand(std::time(NULL));
	for (int i = 0; i < 10; ++i) {
		Base* base = generate();
		std::cout << i << ": ";
		identify(base);
		std::cout << '\n';
		delete base;
	}
	return 0;
}
