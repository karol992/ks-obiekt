#include "KsiazkaAdresowa.h"

KsiazkaAdresowa::KsiazkaAdresowa (string nazwa) : uzytkownikMenedzer(nazwa), idZalogowanegoUzytkownika(0) {
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
    char wybor;
    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

}
