#ifndef ADRESACIMENEDZER_H
#define ADRESACIMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <algorithm>
#include <sstream>
#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresaciMenedzer {
    PlikZAdresatami plikZAdresatami;

    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    string wczytajLinie();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
public:
    AdresaciMenedzer(string nazwa2) : plikZAdresatami(nazwa2) {};
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void dodajAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void oproznijAdresatow();
};

#endif
