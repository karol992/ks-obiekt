#ifndef ADRESACIMENEDZER_H
#define ADRESACIMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresaciMenedzer {
    PlikZAdresatami plikZAdresatami;
    fstream plikTekstowy;

    vector <Adresat> adresaci;
public:
    AdresaciMenedzer(string nazwa2) : plikZAdresatami(nazwa2) {};
};

#endif
