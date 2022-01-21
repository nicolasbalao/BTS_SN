#include "../includes/FichierBinaire.h"
#include <iostream>

FichierBinaire::FichierBinaire()
{
	m_pathFile = "";
	std::cout << "Constructeur par défaut de la classe FichierBinaire" << std::endl;
	
}

FichierBinaire::FichierBinaire( std::string _path)
{
	std::cout << "Constructeur surchargé de la classe FichierBinaire" << std::endl;
	m_pathFile= _path;
}

FichierBinaire::~FichierBinaire()
{
	std::cout << "Destructeur de la classe FichierBinaire" << std::endl;
}

int FichierBinaire::ouvrir()
{
	if (m_pathFile.empty()==true) return -1;
	m_fileStream.open(m_pathFile, std::fstream::binary);
	if (m_fileStream.is_open() == false) return -1;
  std::cout << "Ouverture du fichier" << std::endl;

	return 0;
}

void FichierBinaire::fermer()
{
	if (m_pathFile.empty()==false) m_fileStream.close();
}

int FichierBinaire::lire(char *_ptrdonnees, int _offset, int _nbre)
{
	if (m_pathFile.empty() == true) return -1;

  m_fileStream.seekg(_offset);
	
	m_fileStream.read(_ptrdonnees, _nbre);
    if (m_fileStream.eof()==false) return 0;
	return -1;
}

std::string FichierBinaire::getNomFichier()
{	
  return m_pathFile;
}



