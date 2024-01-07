/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 18:32:28 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/07 02:49:43 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// template <typename T>

int main()
{
    __unused int *b = new int[5];
    Array<int *>  a;
    Array<int *>  c(5);
    Array<int *> d(a);
    std::cout << "a" << std::endl;    
}