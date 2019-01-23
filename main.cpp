#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt","Adresaci.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    while (true) {
            if (!ksiazkaAdresowa.czyUzytkownikJestZalogowany()) {
                ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();
            }
            else {
                ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();
            }
    }
    return 0;
}
