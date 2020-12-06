#pragma once
#include "funkcijos.h"
struct studentas {
	string Vardas, Pavarde;
	int Pazymiai[DYDIS], num = 0;
	float Egzaminas, mediana = 0, vidurkis = 0, rez = 0;
	vector<float> paz;
};
class studentasc {
private:
	string Vardas;
	string Pavarde;
	int Pazymiai[DYDIS], Egzaminas;
	vector<float> paz;
	double vidurkis, galutinis;

public:
	studentasc() : Egzaminas(0) { } //default konstruktorius

	void setValues(string Vardas, string Pavarde, double vidurkis, double Egzaminas) {
		this->Vardas = Vardas;
		this->Pavarde = Pavarde;
		this->vidurkis = vidurkis;
		this->Egzaminas = Egzaminas; // SETTERIAI
	}
	void setGalutinis() {
		this->galutinis = 0.4 * this->vidurkis + 0.6 * this->Egzaminas;
	}
	string getVardas() const { return Vardas; }
	string getPavarde() const { return Pavarde; }
	float getGalutinis() const { return galutinis; }
};