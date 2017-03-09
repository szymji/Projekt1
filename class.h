#ifndef CLASS_H
#define CLASS_H
#define ROZMIAR 20


 class Osoba
 {
 private:
 	char imie[ROZMIAR];
 	char nazw[ROZMIAR];
 	char pseud[ROZMIAR];
 public:
	Osoba();
	void getOsoba();
	void wyswietlDane();
	void odTylu();

 };

 #endif
