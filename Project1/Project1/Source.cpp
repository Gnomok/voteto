#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdint>
#include <fstream>
#include <bitset>
#include <stdio.h>
#include "write.h"
using namespace std;
#include <cstdio>
static int counter = 1;

short* allocate(uint16_t  size) {
	short* array = new short[size + 1];
	array++;
	array[-1] = (size << 8) | counter;
	for (int i = 0; i < size; i++) {
		array[i] = 0;
		cout << i << ". " << array[i] << endl;;
	}
	cout << "Array Lenght: " << (array[-1] >> 8) << endl;
	cout << "Array Counter: " << (array[-1] & 0xFF) << endl;
	counter++;
	return array;
}

int main()
{
	uint16_t lenght = 7;
	short* tablica = allocate(lenght);
	saveArrayToFile(tablica);
	readArrayFromFile();
	delete[](tablica - 1);
	tablica = nullptr;

}