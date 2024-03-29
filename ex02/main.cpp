/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 18:32:28 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/09 18:15:20 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		Array<int *>  a;
    	Array<int *>  c(1337);
		for (int i = 0; i < 1337 ; i++)
		{
			int *p = new int(i);
			c[i] = p;
		}
    	Array<int *> d(a);
    	std::cout << "a : " << *(c[42]) << std::endl;
		const Array<int *> b(c);
		std::cout << *(b[1]) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}