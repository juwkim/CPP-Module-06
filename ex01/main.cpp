/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 01:19:47 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/29 01:23:40 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	struct Data s = {0, 1};

	if (&s == Serializer::deserializer(Serializer::serializer(&s)))
		std::cout << "true" << '\n';
	else
		std::cout << "false" << '\n';
}