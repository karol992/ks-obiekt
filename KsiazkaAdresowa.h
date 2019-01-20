#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenedzer uzytkownikMenedzer;
    int idZalogowanegoUzytkownika;
public:
    KsiazkaAdresowa(string nazwa);
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    void ustawIDZalogowanegoUzytkownika(int liczba);
    void wybierzOpcjeZMenuGlownego();
};

#endif
