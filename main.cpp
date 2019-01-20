#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    ksiazkaAdresowa.logowanieUzytkownika();
    cout << ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() << endl;
    /*ksiazkaAdresowa.wczytajUzytkownikowZPliku():
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();*/
    return 0;
}
