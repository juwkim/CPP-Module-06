/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 01:12:06 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/29 01:20:40 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>
#include <iostream>

struct	Data
{
	int a;
	int b;
};

class Serializer
{
	public:
		static uintptr_t serializer(Data* ptr);
		static Data* deserializer(uintptr_t raw);

	private:
		virtual ~Serializer(void);
		Serializer(void);
		Serializer(const Serializer &serializer);
		Serializer& operator=(const Serializer &serializer);
};
