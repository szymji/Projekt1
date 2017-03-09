#include "class.h"

bool isVowel(char a){

	int anum;
	anum = 65;
	if(a==anum || a==anum+32) { return true; }
	anum = 69;
	if(a==anum || a==anum+32) { return true; }
	anum = 73;
	if(a==anum || a==anum+32) { return true; }
	anum = 79;
	if(a==anum || a==anum+32) { return true; }
	anum = 85;
	if(a==anum || a==anum+32) { return true; }
	anum = 89;
	if(a==anum || a==anum+32) { return true; }
	
	return false;

}

// cos
void Osoba::wstawZ(){

	for(int i = 0;i<ROZMIAR;i++){

		if( isVowel(imie[i]) ){ imie[i]= 'z'; }
		if( isVowel(nazw[i]) ){ nazw[i]= 'z'; }
		if( isVowel(pseud[i]) ){ pseud[i]= 'z'; }
		
	}

}
