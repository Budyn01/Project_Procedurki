#include <stdio.h>
#include <iostream>
#include "stdafx.h"

using namespace std;

//zdefini stale N i M - wymiary  (na 10)
#define DEPTH_MIN 10    // glebokosc zanurzenia okretu

// zdefiniowac typ wyliczeniowy: kierunki ruchu : UP RIGHT DOWN LEFT
//
//enum DIRECTIONS {
//	UP,
//	RIGHT,
//	DOWN,
//	LEFT
//};


//int move(int** pTab, int nRow, int nCol, int nDepth,
//	int move_nr, int x, int y, int* px, int* py, int** pRoot);

/* pTab - tablica okreslajaca glebokosc w kazdym kwadracie
nRow, nCol - rozmia pTab,
nDepth - minimalna glebokosc aby statek przpelynal
x, y - indeksy w tablicy skad wykonujemy kolejny ruch np. zaczynamy od 0,0
move_nr - kierunek ruchu
ps py - nowe wspolrzedne
pRoot - tablica pamietajaca ruchy o rozm nRow, nCol
*/
//int root(int** pTab, int nRow, int nCol, int nDepth,
//	int x, int y, int** pRoot, int x_dest, int y_dest);
///* pTab tabl glebokosci   o romiarze bRow  i nCol
//dDepth - glebokosc zanurzenia ststku
//x, y - wspol skad robimy kolejny ruch
//pRoot tablica kolejnych ruchow
//x_dest, y_dest - wsporzedne portu
//*/

//void clearRoot(int** pRoot, int nRow, int nCol);
//// zeruje obie tablice (chyba ze calloc to nie potrzebna!)
//

// filename -  nazwa pliku wejsciowego - parametr main()
// seaMap  - tablica glebokosci morza
// row, col wymiary tej tablicy
// wczytuje dane z pliku

void setTab(char* filename, int** seaMap, int row, int col);






int main()
{
	int **tab = (int**)calloc(5, sizeof(int*));
	for (int i = 0; i < 5; i++)
	{
		tab[i] = new int[5];
	}
	
	setTab((char*) "map.txt", tab, 5, 5);


	//Wykreowac dynamicznie dwie tablice dwuwymiarowe (ogolnie mopga byc rozne wymiary_
	// wykorzystac funkcje z matrixa ale dodac parametr z drugim wymiarem

	//wyzerowac obie tablice // chyba ze calloc w kreowaniu
	// wczytac dane 

	// Jezleli nie znaleziono drogi od (0,0) - funkcja rekur root - wypisac
	"** Nie ma mozliwosci doplynac do portu!!\n\n";

	// jesli ok to wypisac trase
	//zwolnic pamiec
	system("PAUSE");
	return 0;
}

//-------------------------------------------------------------
//int move(int** pTab, int nRow, int nCol, int nDepth,
//	int move_nr, int x, int y, int* px, int* py, int** pRoot)
//{   // x  y - wsporzedne skad robimy nowy ruch
//	//  wykonac kolejny ruch w kierunku move_nr obliczajac nowe wspolrzedne *px *py
//
//	//sprawdzic czy nowe indeksy *px i *py sa w zakresie indeksow tablicy
//	// a nastepnie sprawdzic warunek czy nie jest a plytko ">nDepth+1 " oraz
//	// czy nie bylo sie juz w lokalizacji (*px,*py) - wg tabl pRoot
//
//	//    jesli wszystkie warunmi poprawne to zwracamy 1
//	//    else 0
//}

//----------------------------------------------------------------------------------
//int root(int** pTab, int nRow, int nCol, int nDepth, int x, int y, int** pRoot,
//	int x_dest, int y_dest)
//{
//	// tabl pRoot pamieta droge   - 1 pole przez ktore odwiedzono (plynie statek) 
//	//                                0 pole nie odwiedzone
//
//	if (dotarto do portu)
//		return 1;
//}
//  else
//  { // zdeiniowac nowe wspolrzende 
//	// sprwadzic wszystkie mozliwosci ruchu
//	//jesli ruch jest mozliwy w zadanym kierunku 
//	//jesli wykonanie kolejnego kroku sie powiodlo - rekurencyjnie root()
//	  return 1;
//  }
//  // jesli wracamy to ustawiamy w pRoot ze ruch byl zly
//  return 0;
//   }
//   return 0;
//}

void setTab(char* filename, int** seaMap, int row, int col) {

	FILE *file = NULL;
	int size;
	if ((file = fopen(filename, "r")) == NULL) {
		printf("ERROR: can't read file!");
		return;
	}
	fscanf(file, "%d", &size);
	printf("%d", size);
	fclose(file);

	//FILE *file = NULL;

	//if ((file = fopen(filename, "r")) == NULL) {
	//	printf("ERROR: can't open file\n");
	//	return;
	//}

	//int zmienna;
	//fscanf(file, "%d", &zmienna);
	//printf("%d, ", zmienna);


	//for (int i = 0; i < row; i++) {
	//	for (int j = 0; j < col; j++) {
	//		fscanf(file, "%i", &zmienna);
	//		printf("%i, ", zmienna);
	//	}
	//	printf("\n");
	//}

	//fclose(file);
}


