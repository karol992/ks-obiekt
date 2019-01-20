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
    void wypiszWszystkichUzytkownikow();

    void wybierzOpcjeZMenuGlownego();
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();

    void zmianaHaslaZalogowanegoUzytkownika();

    int pobierzIdZalogowanegoUzytkownika();
    void ustawIDZalogowanegoUzytkownika(int liczba);
};

#endif
