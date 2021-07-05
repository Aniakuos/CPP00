/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:27:12 by ssghuri           #+#    #+#             */
/*   Updated: 2021/07/03 19:27:16 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int     main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            std::cout << (char)toupper(argv[i][j]);
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}
