//Matparameter.cpp
#include <iostream>
#include <cstdlib>
using namespace std;
double spezwiderstand(string material) {
	double widerstand = 0;
	if (material == "silber" || material == "Silber")
		widerstand = 0.0165;
	else if (material == "Kupfer" || material == "kupfer")
		widerstand = 0.0178;
	else if (material == "Gold" || material == "gold")
		widerstand = 0.023;
	else if (material == "Aluminium" || material == "aluminium")
		widerstand = 0.0286;
	else if (material == "Wolfram" || material == "wolfram")
		widerstand = 0.055;
	else if (material == "Zinn" || material == "zinn")
		widerstand = 0.12;
	else if (material == "Zink" || material == "zink")
		widerstand = 0.061;
	else if (material == "Nickel" || material == "nickel")
		widerstand = 0.1;
	else if (material == "Eisen" || material == "eisen")
		widerstand = 0.12;
	else if (material == "Platin" || material == "paltin")
		widerstand = 0.13;
	else if (material == "Blei" || material == "blei")
		widerstand = 0.21;
	else if (material == "Quecksilber" || material == "quecksilber")
		widerstand = 0.96;
													
														
		return widerstand;

}

double tempa(string material) {

	double Tempa = 0;
	if (material == "silber" || material == "Silber")
		Tempa = 0.0038;
	else if (material == "Kupfer" || material == "kupfer")
		Tempa = 0.0039;
	else if (material == "Gold" || material == "gold")
		Tempa = 0.0039;
	else if (material == "Aluminium" || material == "aluminium")
		Tempa = 0.0037;
	else if (material == "Wolfram" || material == "wolfram")
		Tempa = 0.0048;
	else if (material == "Zinn" || material == "zinn")
		Tempa = 0.0042;
	else if (material == "Zink" || material == "zink")
		Tempa = 0.0042;
	else if (material == "Nickel" || material == "nickel")
		Tempa = 0.0048;
	else if (material == "Eisen" || material == "eisen")
		Tempa = 0.0052;
	else if (material == "Platin" || material == "paltin")
		Tempa = 0.0025;
	else if (material == "Blei" || material == "blei")
		Tempa = 0.0042;
	else if (material == "Quecksilber" || material == "quecksilber")
		Tempa = 0.00092;


	return Tempa;
}