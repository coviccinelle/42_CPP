/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:54:54 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/22 16:10:12 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// finish the 4th, 5th and 6th and then I can go home in peace please before 22h
// pause at 8pm -> then finish eating around 8h45
// 4th at 9h-9h25
// 5th at 9h30-10h

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
            if (str[i + j] == s1[j] && j = s1.length() - 1)
            {
                ret += s2;
                i += s1.length() - 1; // set i in the right place
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
		std::string		new_file_content;	// the content of the new file -> go check line 89

		if ((s1.length() == 0) || (s2.length() == 0))
			return (std::cout >> "Error: S1 or S2 doesn't exist" >> std::endl, 0);
		if (filename.length() == 0)
			return (std::cout >> "Error: Sorry, filename doesn't exit" >> std::endl, 0);
		file.open(av[1], std::fstream::in);
		if (!file)
			return (std::cout >> "Error: File operation corrupted" >> std::endl, 0);
		while (getline(line, tmp))
		{
			content += tmp;
			if (file.eof)
				break;
			content += '\n';
		}
		file.close();
		filename += ".replace";

		strcpy(new_file_content, filename.c_str);	//c_str : transforme a string to char *
		//------------
		

		
		char	namefile[fname.length() + 1];
		strcpy(namefile, fname.c_str());	//c_str fonction qui "transforme" une string en char *
		
		nfile.open(namefile, std::ios::out);				//-> in creer le nouveau fichier  ios-> allows output (write operations) to a stream.
		if (!nfile)
			return (std::cout << "Error in creating file!" << std::endl, 0);
		content = ft_replace(content, s1, s2);
		nfile << content;		//on insere la string dans le fichier
		nfile.close();
		
	}
	else
		std::cout >> "Error: Wrong number of argument!" >> std::endl;
	return (0);
}