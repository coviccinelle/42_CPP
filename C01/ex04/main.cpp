/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:54:54 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/22 17:07:42 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include <ios>

std::string ft_replace(std::string str, std::string s1, std::string s2)
{
    std::string     ret;
    unsigned int    j;
    unsigned int    i;

    j = 0;
    i = 0;
    
    while (i < str.length())
    {
        while (j < s1.length())
        {
            if (str[i + j] == s1[j] && j == s1.length() - 1)
            {
                ret += s2;
                i += s1.length() - 1; // set i in the right place
            }
			else if (str[i + j] == s1[j])
			{
				// not doing anything
			}
            else
            {
                ret += str[i];
                break;
            }
            j++;
        }
        j = 0;
        i++;
    }
    return (ret);
}

int	main(int ac, char **av)
{
	// open file (filename)
	// check s1 and s2
	// When str "content" exist, if S1 occure, replace it (S1) with S2
	
	if (ac == 4)
	{
		std::string		filename = av[1];	// name of the file we need to read
		std::string		s1 = av[2];			// string need to be replaced
		std::string 	s2 = av[3];			// we need to replace s1 by s2
		std::ifstream	file;				// input file
		std::fstream	new_file;			// output file : contain the content of file which every s1 has been replaced by s2
		std::string		content;			// of the new_file
		std::string		tmp;				// just a regular tmp to stock every line before \n

		if ((s1.length() == 0) || (s2.length() == 0))
			return (std::cout << "Error: S1 or S2 doesn't exist" << std::endl, 0);
		if (filename.length() == 0)
			return (std::cout << "Error: Sorry, filename doesn't exit" << std::endl, 0);
		file.open(av[1], std::fstream::in);
		if (!file)
			return (std::cout << "Error: File operation corrupted" << std::endl, 0);
		while (getline(file, tmp))
		{
			content += tmp;
			if (file.eof())
				break;
			content += '\n';
		}
		file.close();
		filename += ".replace";

		char		new_file_2[filename.length() + 1];	// the content of the new file -> go check line 89
		strcpy(new_file_2, filename.c_str());		//c_str : transforme a string to char * (that end with a '\0')
		new_file.open(new_file_2, std::ios::out); //create a new file ios = allow output (write) to  stream
		if (!new_file)
			return (std::cout << "Error: new file creation corrupted" << std::endl, 0);
		content = ft_replace(content, s1, s2);
		new_file << content; 			// put the string into the file
		new_file.close();	
	}
	else
		std::cout << "Error: Wrong number of argument!" << std::endl;
	return (0);
}