//Eingabe.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

string auswahl() {				//auswahlfunktion der Rechenart // Rückgabe der Rechenart
	string auswahl = "1";

	cout << "Rechenvariante auswählen" << endl;
	cout << "-------------------------" << endl << endl;
	cout << "Der genormte Widerstandswert R20, das Material und die Temperatur 0 sind bekannt (1)" << endl;
	cout << "Die Länge, der Querschnitt, das Material und die Temperatur 0 sind bekannt (2)" << endl << endl;
	cout << "Bitte geben sie 1 oder 2 ein " << endl;
	cin >> auswahl;

	return auswahl;
}

double ausgabe(double ergebnis) {					//ausgabefunktion des Ergebnis

	cout << "ergebnis = " << ergebnis << endl;

	return 0;
}

string ende() {										//abfrage zum Programmende
	string eingabe = "1";
	cout << "Beliebige eingabe zum fortfahren" << endl;
	cout << "Zum Beenden exit eingeben" << endl;
	cin >> eingabe;

	return eingabe;
}

string material() {										//abfrage zum Programmende
	string material = "1";
	cout << "Eingabe Material" << endl;
	cin >> material;

	return material;
}

double temperatur() {										//abfrage zum Programmende
	double temperatur = 0;
	cout << "Eingabe Temperatur 0 (in Kelvin)" << endl;
	cin >> temperatur;

	return temperatur;
}

double widerstandr20() {										//abfrage zum Programmende
	double r20 = 0;
	cout << "Eingabe genormte Widerstandswert R20 (in Ohm)" << endl;
	cin >> r20;

	return r20;
}

double laenge() {										//abfrage zum Programmende
	double laenge = 0;
	cout << "Eingabe länge (in mm)" << endl;
	cin >> laenge;

	return laenge;
}

double querschnitt() {										//abfrage zum Programmende
	double querschnitt = 0;
	cout << "Eingabe Querschnitt (in mm)" << endl;
	cin >> querschnitt;

	return querschnitt;
}