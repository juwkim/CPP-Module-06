/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 23:16:56 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/29 01:08:33 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter(void)
{
}

ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &scalarConverter)
{
	(void)scalarConverter;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &scalarConverter)
{
	(void)scalarConverter;
	return *this;
}

static void	print_char(const double d);
static void	print_int(const double d);
static void	print_float(const double d);
static void	print_double(const double d);
void ScalarConverter::convert(const std::string &literal)
{
	double	d;

	if (literal.length() == 1 && std::isalpha(literal[0]))
		d = static_cast<double>(literal[0]);
	else
		d = std::strtod(literal.c_str(), NULL);
	
	std::string::size_type idx = literal.find('.');
	if (idx == std::string::npos || idx == literal.length() - 1)
		std::cout << std::fixed << std::setprecision(1);
	else {
		int prec = literal.length() - idx - 1;
		if (literal[literal.length() - 1] == 'f')
			--prec;
		std::cout << std::fixed << std::setprecision(prec);
	}
	print_char(d);
	print_int(d);
	print_float(d);
	print_double(d);
}

static void print_char(const double d)
{
	const char c = static_cast<char>(d);

	std::cout << "char: ";
	if (std::isnan(d) || d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
		std::cout << "impossible" << '\n';
	else if (std::isprint(c) == false)
		std::cout << "Non displayable" << '\n';
	else
		std::cout << "'" << c << "'" << '\n';
}

static void	print_int(const double d)
{
	const int i = static_cast<int>(d);

	std::cout << "int: ";
	if (std::isnan(d) || d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
		std::cout << "impossible" << '\n';
	else
		std::cout << i << '\n';
}

static void	print_float(const double d)
{
	const float f = static_cast<float>(d);
	std::cout << "float: ";
	if (std::isnan(d))
		std::cout << "nanf" << '\n';
	else if (f == std::numeric_limits<float>::infinity())
		std::cout << "+inff" << '\n';
	else if (f == -std::numeric_limits<float>::infinity())
		std::cout << "-inff" << '\n';
	else
		std::cout << f << 'f' << '\n';
}

static void	print_double(const double d)
{
	std::cout << "double: ";
	if (std::isnan(d))
		std::cout << "nan" << '\n';
	else if (d == std::numeric_limits<double>::infinity())
		std::cout << "+inf" << '\n';
	else if (d == -std::numeric_limits<double>::infinity())
		std::cout << "-inf" << '\n';
	else
		std::cout << d << '\n';
}
