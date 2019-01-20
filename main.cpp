#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    while (true) {
            if (ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() == 0) {
                ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();
            }
            else {
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                return 0;
            }
    }
    /*ksiazkaAdresowa.wczytajUzytkownikowZPliku():
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();*/
    return 0;
}
