#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

class MetodyPomocnicze {

public:
    static string konwerjsaIntNaString(int liczba);
    static char wczytajZnak();
    static int konwersjaStringNaInt(string liczba);
    static bool czyPlikJestPusty(fstream &plikTekstowy);
};

#endif
