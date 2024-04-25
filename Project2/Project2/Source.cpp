#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdint>
#include <fstream>
#include <bitset>
#include <stdio.h>
#include "Struktura.h"
using namespace std;
#include <cstdio>

struct Struktura {
    int i;
    double d;
};

int main() {
    Struktura wzorzec;
    wzorzec.i = 10;
    wzorzec.d = 3.14;

    int rozmiarTablicy = 5;
    Struktura* tablica = alokujTablice(rozmiarTablicy, wzorzec);

    cout << "Tablica po alokacji:" << std::endl;
    for (int i = 0; i < rozmiarTablicy; ++i) {
        cout << "Element " << i << ": i = " << tablica[i].i << ", d = " << tablica[i].d << std::endl;
    }

    saveArrayToFile(tablica, rozmiarTablicy);
    readArrayFromFile();

    delete[] tablica;

    return 0;
}