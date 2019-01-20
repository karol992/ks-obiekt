#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenedzer {
    PlikZUzytkownikami plikZUzytkownikami;
    fstream plikTekstowy;

    vector <Uzytkownik> uzytkownicy;

    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    void zapiszWszystkichUzytkownikowDoPliku();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);

public:
    UzytkownikMenedzer(string nazwa) : plikZUzytkownikami(nazwa) {};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    Uzytkownik podajDaneNowegoUzytkownika();
    void wczytajUzytkownikowZPliku();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
};

#endif
