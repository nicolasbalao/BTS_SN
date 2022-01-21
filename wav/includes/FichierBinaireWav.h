#ifndef DEF_FICHIER_BINAIRE_WAV
#define DEF_FICHIER_BINAIRE_WAV

#include "FichierBinaire.h"
#include <string>

#include<iostream>

struct HEADER{
  char *TAG1; //RIFF
  char *SIZE; // taille du fichier moins 8 octets
  char *FORMAT1; //Format = "WAVE"
  char *TAG2;//Identifiant "fmt"
  char *LGDEF;//Nombre d'octets utilisés pour définir en détail le contenu
  char *FORMAT2;//Format de fichier (1:PCM)
  char *NBCANAUX;// stéréro ou mono
  char *FREQ;// Fréquence d'échantillonage en (HERTZ)
  char *BYTEPERSEC; //Nombre d'octets par seconde de musique
  char *NBRBYTE;// Nombre d'octets par echantillon
  char *NBITS;//Nombre de bits par donné
  char *TAG3;//Constant Data
  char *SIZE2;//Taille du fichier moins 44 octets
};

class FichierBinaireWav : public FichierBinaire{

  private:
    HEADER m_header;

  public:
    FichierBinaireWav();
    FichierBinaireWav(std::string path);
    
    int initHeaderAtt();
    void getHeaderAtt() const;

};


#endif // 
