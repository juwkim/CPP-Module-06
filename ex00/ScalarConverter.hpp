/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 23:16:28 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/29 01:08:07 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <limits>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <iostream>

class ScalarConverter
{
	public:
		static void	convert(const std::string& literal);

	private:
		virtual ~ScalarConverter(void);
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter& scalarConverter);
		ScalarConverter& operator=(const ScalarConverter& scalarConverter);
};
