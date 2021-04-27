//
//	Inhalt:
//		Einordnung:			Aufgabe_ls4_02
//		Projekt: 			Widerstandsrechner
//		Thema:				Widerstandsrechner
//	Autor:
//		Name:				Joel Nobis
//		Organisaion:		BK-GuT
//
//	Datum:
//		Erstellt:			20.04.2021
//		Letzte Änderung:	27.04.2021
//

//steunermodul.cpp

#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include "Eingabe.h";
#include "Matparameter.h";
using namespace std;


int main() {
	
	double variante1();
	double variante2();

	locale::global(locale("German_germany"));				// Zeichensatz deutsch

	string exit = "1";										//Bedingung des Programm endes

	while (exit != "exit") {								//Steuerungsfunkition

		string auswahl1 = "1";

		auswahl1 = auswahl();

		if (auswahl1 == "1") {
			variante1();
		}

		if (auswahl1 == "2") {
			variante2();
		}
		
		exit = ende();										//abfrage Programmende
		cout << " " << endl << endl << endl << endl;
	}
}
double variante1() {
	double ergebnis = 0;

	double r20 = widerstandr20();
	string Material = material();
	double T0 = temperatur();


	ausgabe(ergebnis);											//ausgabe des ergebnis
	return 0;
}

double variante2() {
	double ergebnis = 0;

	double Laenge = laenge();
	double Querschnitt = querschnitt();
	string Material = material();
	double T0 = temperatur();
	double Spezwiderstand = spezwiderstand(Material);
	ergebnis = Spezwiderstand;
	ausgabe(ergebnis);											//ausgabe des ergebnis
	return 0;
}