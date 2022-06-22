

int	main(int argc, char **argv)
{	
	
	/*
		check s1 et s2 existe
		declare fstream
		open file with	.is_open
		use getline (file, temp)
		on met tout dans tmp et on ajoute a chaque fois dans content
						.eof ->voir la doc cpp
		une fois que content est rempli on cherche s1 et on remplace par s2
		on cree et on ouvre le nouveau fichier et on le rempli
		//	ofstream -> write on files
		//	ifstream -> read from files
		//	fstream -> read from files and write on files 
	
	*/

	if (argc == 4)
	{
		std::string		fname = argv[1];	//-> nome du fichier a ouvrir
		std::string		s1 = argv[2];		//-> string 1
		std::string		s2 = argv[3];		//-> string 2
		std::ifstream	file;				//-> le fichier a lire
		std::fstream	nfile;				//-> le nouveau fichier a creer
		std::string		content;			//-> on va mettre tout ce qui a en dans le fichier file dans content
		std::string		tmp;				//-> va nous servir a lire le fichier car getline s'arrete lorsqu'il 
											// trouve '\n'

		if (fname.length() == 0)
			return (std::cout << "the file didn't exist!" << std::endl, 0);
		if (s1.length() == 0)
			return (std::cout << "string1 didn't exist!" << std::endl, 0);
		if (s2.length() == 0)
			return (std::cout << "string2 didn't exist!" << std::endl, 0);
		file.open(argv[1], std::fstream::in);
		if (!file)
			return (std::cout << "Fail to open the file!" << std::endl, 0);
		while (getline(file, tmp))
		{
			content += tmp;
			if (file.eof())					//-> on est arriver a la fin du fichier
				break ;
			content += '\n';
		}
		file.close();
		fname += ".replace";				//-> nom du nouveau fichier
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
		std::cout << "Wrong numbers of params" << std::endl;
	return (0);
}