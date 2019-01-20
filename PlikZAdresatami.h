#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami {
    const string nazwaPlikuZAdresatami;
    fstream plikTekstowy;

    //bool czyPlikJestPusty();
    //string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    //Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
public:
    //void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    //vector <Uzytkownik> wczytajUzytkownikowZPliku();
    //void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> uzytkownicy);
    PlikZAdresatami(string nazwa2) : nazwaPlikuZAdresatami(nazwa2) {};
};

#endif
