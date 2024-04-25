#define _CRT_SECURE_NO_WARNINGS
#include "Struktura.h"
#include <iostream>
#include <cstdint>
#include <fstream>
#include <bitset>
#include <stdio.h>
using namespace std;
#include <cstdio>

struct Struktura {
    int i;
    double d;
};

void saveArrayToFile(Struktura* tablica, int rozmiar) {
    FILE* desPliku = nullptr;
    desPliku = fopen("privet2.txt", "w");
    if (desPliku != nullptr) {
        for (int i = 0; i < rozmiar; ++i) {
            fprintf(desPliku, "Element %d: i = %d, d = %lf\n", i, tablica[i].i, tablica[i].d);
        }
        fclose(desPliku);
    }
    else {
        std::cerr << "Nie udalo sie otworzyc pliku." << std::endl;
    }
}