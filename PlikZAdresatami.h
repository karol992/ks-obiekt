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
    int idOstatniegoAdresata;
    int idZalogowanegoUzytkownika;

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
public:
    PlikZAdresatami(string nazwa2) : nazwaPlikuZAdresatami(nazwa2), idOstatniegoAdresata(0) {};
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int id);
    int pobierzIdOstatniegoAdresata();
    void dopiszAdresataDoPliku(Adresat adresat);
};

#endif
