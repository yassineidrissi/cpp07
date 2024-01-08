/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 18:32:28 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/07 21:52:14 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		const Array<int *> b;
		b[0] = 0;
		Array<int *>  a;
    	Array<int *>  c(42);
		for (int i = 0; i < 42 ; i++)
		{
			int *p = new int(i);
			c[i] = p;
		}
    	Array<int *> d(a);
    	std::cout << "a : " << *(c[0]) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}