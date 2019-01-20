#include "KsiazkaAdresowa.h"

KsiazkaAdresowa::KsiazkaAdresowa (string nazwa, string nazwa2) :
    uzytkownikMenedzer(nazwa), adresaciMenedzer(nazwa2),
    idZalogowanegoUzytkownika(0), /*idOstatniegoAdresata(0),*/idUsunietegoAdresata(0) {
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
}
void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenedzer.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::logowanieUzytkownika() {
    idZalogowanegoUzytkownika = uzytkownikMenedzer.logowanieUzytkownika();
}
int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika() {
    return idZalogowanegoUzytkownika;
}
void KsiazkaAdresowa::ustawIDZalogowanegoUzytkownika(int liczba) {
    idZalogowanegoUzytkownika = liczba;
}
void KsiazkaAdresowa::wybierzOpcjeZMenuGlownego() {
    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    switch (MetodyPomocnicze::wczytajZnak()) {
    case '1':
        rejestracjaUzytkownika();
        break;
    case '2':
        logowanieUzytkownika();
        break;
    case '9':
        exit(0);
        break;
    default:
        cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
        system("pause");
        break;
    }

}
void KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    adresaciMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    switch (MetodyPomocnicze::wczytajZnak()) {
    case '1':
    //    idOstatniegoAdresata = dodajAdresata(adresaci, idZalogowanegoUzytkownika, idOstatniegoAdresata);
        dodajAdresata();
        break;
    /*case '2':
        wyszukajAdresatowPoImieniu(adresaci);
        break;
    case '3':
        wyszukajAdresatowPoNazwisku(adresaci);
        break;*/
    case '4':
    //    wyswietlWszystkichAdresatow(adresaci);
        break;
    /*case '5':
        idUsunietegoAdresata = usunAdresata(adresaci);
        idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
        break;
    case '6':
        edytujAdresata(adresaci);
        break;*/
    case '7':
        zmianaHaslaZalogowanegoUzytkownika();
        break;
    case '8':
        idZalogowanegoUzytkownika = 0;
        //adresaci.clear();
        break;
    }
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
}
void KsiazkaAdresowa::dodajAdresata() {
    adresaciMenedzer.dodajAdresata(idZalogowanegoUzytkownika);
}
