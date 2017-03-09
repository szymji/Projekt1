#include <iostream>
#include <string.h>
#include "class.h"

using namespace std;

 // uzytkownik sam wpisuje dane
 void Osoba::getOsoba(){
	cout << "Podaj imie:";
	cin.width(ROZMIAR);
 	cin >>  imie;
 	cout << "Podaj nazwisko:";
 	cin.width(ROZMIAR);
 	cin >>  nazw;
 	cout << "Podaj pseudonimm:";
 	cin.width(ROZMIAR);
 	cin >>  pseud;
 }

// automatyczne dane
 Osoba::Osoba(){

 	strcpy(imie," ");
 	strcpy(nazw," ");
 	strcpy(pseud," ");

 }

 void Osoba::wyswietlDane(){

 	cout << imie << " " << nazw <<  " '" << pseud << "'" << endl;
 }

