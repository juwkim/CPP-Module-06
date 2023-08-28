/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 23:28:07 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/28 23:36:41 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2) {
		std::cout << "Usage: ./convert literal" << '\n';
		return 0;
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}
