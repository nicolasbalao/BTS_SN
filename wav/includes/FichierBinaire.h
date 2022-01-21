#pragma once
#include <iostream>
#include <string>
#include <fstream>

class FichierBinaire
{
protected:
	std::string m_pathFile;
	std::ifstream m_fileStream;
   
public:
	FichierBinaire();
	FichierBinaire(std::string path);
	std::string getNomFichier();
	int ouvrir();
	void fermer();
	int lire(char *buffer, int offset,int nbre = 1);
	~FichierBinaire();
};
