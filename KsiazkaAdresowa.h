#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikMenedzer.h"
#include "AdresaciMenedzer.h"


using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresaciMenedzer adresaciMenedzer;
    int idZalogowanegoUzytkownika;
    //int idOstatniegoAdresata;
    int idUsunietegoAdresata;
public:
    KsiazkaAdresowa(string nazwa, string nazwa2);
    void wypiszWszystkichUzytkownikow();

    void wybierzOpcjeZMenuGlownego();
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();

    void wybierzOpcjeZMenuUzytkownika();
    void dodajAdresata();
    void zmianaHaslaZalogowanegoUzytkownika();

    int pobierzIdZalogowanegoUzytkownika();
    void ustawIDZalogowanegoUzytkownika(int liczba);
};

#endif
