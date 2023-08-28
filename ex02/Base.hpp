/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 01:24:23 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/29 01:38:58 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ctime>
#include <cstdlib>
#include <iostream>

class Base
{
	public:
		virtual ~Base(void);
};

class A: public Base
{
};
class B: public Base
{
};
class C: public Base
{
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);
