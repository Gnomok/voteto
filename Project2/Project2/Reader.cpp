#define _CRT_SECURE_NO_WARNINGS
#include "Struktura.h"
#include <iostream>
#include <cstdint>
#include <fstream>
#include <bitset>
#include <stdio.h>
using namespace std;
#include <cstdio>

void readArrayFromFile() {
    FILE* plik = nullptr;
    plik = fopen("privet2.txt", "r");
    if (plik != nullptr) {
        char tekst[100] = {};
        while (fgets(tekst, 100, plik) != nullptr) {
            cout << tekst;
        }
        fclose(plik);
    }
    else {
        std::cerr << "Nie udalo sie otworzyc pliku." << std::endl;
    }
}