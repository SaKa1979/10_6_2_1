/*
 * SW_medewerker.cpp
 *
 *  Created on: 24 Aug 2014
 *      Author: sander
 */
#include <iostream>
#include <string.h>
#include "SW_medewerker.hpp"

using namespace std;


/*double medewerker::bereken_netto_salaris(){
	return (bruto_salaris * (1+(vakantietoeslag/100)));
}*/
void medewerker::schrijf_medewerker(char *naam, double *bruto_salaris){
	strncpy(naam,this->naam,NAAMLEN);
	*bruto_salaris=this->bruto_salaris;
}
void medewerker::lees_medewerker(){
	cout<<"geef medewerker op :";
	cin>>naam;
	cout<<"geef bruto salaris op :";
	cin>>bruto_salaris;
}
/*void medewerker::lees_vakantietoeslag(double *vakantietoeslag){
	this->vakantietoeslag=*vakantietoeslag;
}*/

int main(){

#define medewerkers_aantal 3

	char naam[NAAMLEN];
	double bruto_salaris;
	double netto_salaris;
	double vakantietoeslag;
	medewerker medewerkers[medewerkers_aantal];


	for(int i=0;i<medewerkers_aantal;i++){
		medewerkers[i].lees_medewerker(); // naam en bruto salaris
	}

	cout<<"geef het percentage vakantietoeslag :";
	cin>>vakantietoeslag;

	for(int i=0;i<medewerkers_aantal;i++){
		medewerkers[i].schrijf_medewerker(naam, &bruto_salaris);
		netto_salaris=(bruto_salaris * (1+(vakantietoeslag/100)));
		cout<<"naam :"<<naam <<" netto salaris :"<<netto_salaris <<endl;
	}


/*	for(int i=0;i<medewerkers_aantal;i++){
		medewerkers[i].schrijf_medewerker(naam, &bruto_salaris);
		cout<<"naam :"<<naam <<" bruto :"<<bruto_salaris <<endl;
	}*/


}
