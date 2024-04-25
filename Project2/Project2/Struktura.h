#pragma once

struct Struktura;

void readArrayFromFile();

void saveArrayToFile(Struktura* tablica, int rozmiar);

Struktura* alokujTablice(int rozmiar, const Struktura& wzorzec);