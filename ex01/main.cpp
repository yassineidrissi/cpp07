/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:47:37 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/09 00:09:08 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void to_upper(char& c)
{
	c = std::toupper(static_cast<unsigned char>(c));
}

int main()
{
	const int a = 12;
	char s[] = "hello world!";
	std::cout << "Before : " <<  s << std::endl;
	iter(s, a, to_upper);
	std::cout << "After : " << s << std::endl;
}
