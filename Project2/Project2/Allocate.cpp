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

Struktura* alokujTablice(int rozmiar, const Struktura& wzorzec) {
    Struktura* tablica = new Struktura[rozmiar];

    for (int i = 0; i < rozmiar; ++i) {
        tablica[i].i = wzorzec.i;
        tablica[i].d = wzorzec.d;
    }

    return tablica;
}