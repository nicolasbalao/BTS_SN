#include <iostream>
#include <ostream>
#include "../includes/FichierBinaire.h"
#include "../includes/FichierBinaireWav.h"


int main (int argc, char *argv[])
{
  
  //need full path
  FichierBinaireWav *fileWav = new FichierBinaireWav("/home/tengu/Documents/challengeCTF/ThreatForceCTF/misc/transmission.wav");

  fileWav->ouvrir();
  fileWav->initHeaderAtt();
  fileWav->getHeaderAtt();


  return 0;
}

