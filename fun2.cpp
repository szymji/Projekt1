#include "class.h"


int dlugosc (char* tab){


	for(int i=0;i<ROZMIAR;i++){

		if(tab[i]=='\0'){ return i;}

	}

	return 0;

}

void odwroc(char * tab){


	int n  = dlugosc(tab);
	char temp;

	for(int i=0;i<n/2;i++){

		temp = tab[i];
		tab[i] = tab[n-i-1];
		tab[n-i-1] = temp;
	}

}


void Osoba::odTylu(){

	odwroc(imie);
	odwroc(nazw);
	odwroc(pseud);

}