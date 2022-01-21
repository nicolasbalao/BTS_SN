#include "../includes/FichierBinaireWav.h"
#include <system_error>


FichierBinaireWav::FichierBinaireWav() : FichierBinaire() {
  std::cout << "Constructeur par defaut FichierBinnaireWave" << std::endl;
}

FichierBinaireWav::FichierBinaireWav(std::string _path) : FichierBinaire(_path){
  std::cout << "Constructeur surcharger FichierBinaireWav" << std::endl;
}

int FichierBinaireWav::initHeaderAtt(){


  m_header.TAG1 = new char [4];
  lire(m_header.TAG1, 0, 4);


  m_header.SIZE = new char [4];
  lire(m_header.SIZE, 4, 4);

  m_header.FORMAT1 = new char [4];
  lire(m_header.FORMAT1, 8, 4);

  m_header.TAG2 = new char [4];
  lire(m_header.TAG2, 12, 4);

  m_header.LGDEF = new char [4];
  lire(m_header.LGDEF, 16, 4);

  m_header.FORMAT2 = new char [2];
  lire(m_header.FORMAT2, 20, 2);

  m_header.NBCANAUX = new char [2];
  lire(m_header.NBCANAUX, 22, 2);

  m_header.FREQ = new char [4];
  lire(m_header.FREQ, 24, 4);

  m_header.BYTEPERSEC = new char [4];
  lire(m_header.BYTEPERSEC, 28, 4);

  m_header.NBRBYTE = new char [2];
  lire(m_header.NBRBYTE, 32, 2);

  m_header.NBITS = new char [2];
  lire(m_header.NBITS, 34, 2);    

  m_header.TAG3 = new char [4];
  lire(m_header.TAG3, 36, 4);

  m_header.SIZE2 = new char[4];
  lire(m_header.SIZE2, 40, 4);

  return 0;
}

void FichierBinaireWav::getHeaderAtt() const{
  std::cout << "TAG1: " << m_header.TAG1 << std::endl;
  std::cout << "SIZE: "<< m_header.SIZE << std::endl;
  std::cout << "FORMAT1: "<< m_header.FORMAT1 << std::endl;
  std::cout << "TAG2: " << m_header.TAG2 << std::endl;
  std::cout << "LGDEF: " <<m_header.LGDEF << std::endl;
  std::cout << "FORMAT2: " <<m_header.FORMAT2<< std::endl;
  std::cout << "NBCANAUX: " <<m_header.NBCANAUX << std::endl;
  std::cout << "FREQ: " << m_header.FREQ << std::endl;
  std::cout << "BYTEPERSEC: "<< m_header.BYTEPERSEC << std::endl;
  std::cout << "NBRBYTE: " << m_header.NBRBYTE << std::endl;
  std::cout << "NBRBYTE: "<< m_header.NBITS << std::endl;
  std::cout << "TAG3: " <<m_header.TAG3 << std::endl;
  std::cout << "SIZE2: " <<m_header.SIZE2 << std::endl;
}


