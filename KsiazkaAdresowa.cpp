#include "KsiazkaAdresowa.h"

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika() {
    return uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}
bool KsiazkaAdresowa::czyUzytkownikJestZalogowany() {
    uzytkownikMenedzer.czyUzytkownikJestZalogowany();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenedzer.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {
        adresaciMenedzer = new AdresaciMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }

}
void KsiazkaAdresowa::wylogowanieUzytkownika() {
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresaciMenedzer;
    adresaciMenedzer = NULL;
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::dodajAdresata() {
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {
        adresaciMenedzer->dodajAdresata();
    }
    else {
        cout << "Aby dodac adresata, nalezy najpierw sie zalogowac." << endl;
        system("pasue");
    }
}
void KsiazkaAdresowa::wyszukajAdresatowPoImieniu() {
    adresaciMenedzer->wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    adresaciMenedzer->wyswietlWszystkichAdresatow();
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
    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    //cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    //cout << "5. Usun adresata" << endl;
    //cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    switch (MetodyPomocnicze::wczytajZnak()) {
    case '1':
        dodajAdresata();
        break;
    case '2':
        wyszukajAdresatowPoImieniu();
        break;
    /*case '3':
        wyszukajAdresatowPoNazwisku(adresaci);
        break;*/
    case '4':
        wyswietlWszystkichAdresatow();
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
        wylogowanieUzytkownika();
        break;
    }
}
