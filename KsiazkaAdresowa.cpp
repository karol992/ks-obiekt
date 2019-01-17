#include "KsiazkaAdresowa.h"

KsiazkaAdresowa::KsiazkaAdresowa (string nazwa) : uzytkownikMenedzer(nazwa) {
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
}
void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenedzer.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}
