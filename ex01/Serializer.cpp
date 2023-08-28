/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 01:12:30 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/29 01:19:01 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::~Serializer(void)
{
}

Serializer::Serializer(void)
{
}

Serializer::Serializer(const Serializer &serializer)
{
	(void)serializer;
}

Serializer&	Serializer::operator=(const Serializer &serializer)
{
	(void)serializer;
	return *this;
}

uintptr_t Serializer::serializer(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserializer(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
