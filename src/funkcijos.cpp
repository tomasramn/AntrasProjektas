#include "struktura.h"

void VectTestingClass(vector<studentasc>& vargsiukai, vector <studentasc>& studinfo, int kiekis) {
	// studentu rusiavimas i dvi grupes
	studinfo.reserve(kiekis);
	vargsiukai.reserve(kiekis);
	//galvociai.reserve(kiekis);
	chrono::time_point<chrono::system_clock> start, end;
	chrono::time_point<chrono::system_clock> startEvent, endEvent;
	chrono::duration<double> elapsed_seconds;

	string failas;

	startEvent = chrono::system_clock::now();
	try {
		failas = generuotiklase(kiekis);
	}
	catch (exception& e) {
		cout << "Klaida generuojant Vector faila! \n";
	}

	try {
		start = chrono::system_clock::now();
		nuskaitytiklase(studinfo, kiekis, failas);
		end = chrono::system_clock::now();
		elapsed_seconds = end - start;
		cout << "Failo su " << kiekis << " duomenu nuskaitymas uztruko: " << elapsed_seconds.count() << "s\n";
	}
	catch (exception& e) {
		cout << "Ivyko klaida nuskaitant Vector faila! \n";
	}
	try {
		calculateFinal_ForClass(studinfo, kiekis);
	}
	catch (exception& e) {
		cout << "Ivyko klaida vector failo rusiavime/skirstyme \n";
	}

	try {
		start = chrono::system_clock::now();
		rusiuotiklase(studinfo);
		surusiuok3klase(studinfo, vargsiukai);
		end = chrono::system_clock::now();
		elapsed_seconds = end - start;
		cout << "Failo su " << kiekis << " duomenu suskirstymas i galvocius ir vargsiukus uztruko: " << elapsed_seconds.count() << "s\n";
	}
	catch (exception) {
		cout << "Ivyko klaida nuskaitant ir rusiuojant Vector tipo faila! \n";
	}


	string pavadinimasV = "vargsiukai" + to_string(kiekis) + ".txt";
	string pavadinimasG = "galvociai" + to_string(kiekis) + ".txt";

	try {
		isvedimasklases(vargsiukai, pavadinimasV);
		isvedimasklases(studinfo, pavadinimasG);
	}
	catch (exception) {
		cout << "Ivyko klaida isvedant vector tipo faila! \n";
	}

	endEvent = chrono::system_clock::now();
	elapsed_seconds = endEvent - startEvent;
	cout << "Failo su " << kiekis << " duomenu testo laikas: " << elapsed_seconds.count() << "s\n\n";
}
bool arlygu5klase(const studentasc& v)
{
	return v.getGalutinis() == 5.00;
}
void surusiuok3klase(vector<studentasc>& studinfo, vector<studentasc>& vargsiukai)
{
	try {
		vector<studentasc>::iterator it = find_if(studinfo.begin(), studinfo.end(), arlygu5klase);

		vargsiukai = vector<studentasc>(studinfo.begin(), it);
		studinfo.erase(studinfo.begin(), it);
	}
	catch (std::exception& e) {
		cout << "Ivyko klaida vector failo skirstyme \n";
	}
}
void rusiuotiklase(vector<studentasc>& studinfo)
{
	try {
		sort(studinfo.begin(), studinfo.end(), maziauk);
	}
	catch (exception& e) {
		cout << "Ivyko klaida vector failo rusiavime \n";
	}
}
void calculateFinal_ForClass(vector<studentasc>& studinfo, int kiekis)
{
	try {
		for (int i = 0; i < kiekis; i++) {
			studinfo[i].setGalutinis();
		}
	}
	catch (exception& e) {
		cout << "Ivyko klaida nustatant galutini bala vektoriuje! \n";
	}
}
void nuskaitytiklase(vector<studentasc>& studinfo, int kiekis, string failas)
{
	try {
		ifstream autoIn(failas);
		studinfo.clear(); // nunullinam struktura
		studinfo.reserve(kiekis);
		studinfo.resize(kiekis);
		string Vardas, Pavarde;
		double vidurkis;
		int egzas;

		for (int i = 0; i < kiekis; i++) {
			autoIn >> Vardas >> Pavarde >> vidurkis >> egzas;
			studinfo[i].setValues(Vardas, Pavarde, vidurkis, egzas);
		}
	}
	catch (exception& e) {
		cout << "Ivyko klaida nuskaitant vector tipo faila! \n";
	}
}
string generuotiklase(int kiekis)
{
	int ndKiekis = 3, iCounter = 0;
	try {
		random_device rd;
		mt19937 mt(rd());
		uniform_int_distribution<int> balai(1.0, 10.0);
		double vidurkis = 0, egzas;
		string outrawfile = "rawfile" + to_string(kiekis) + ".txt";
		ofstream rawfile(outrawfile);

		string Vardas, Pavarde;
		for (int i = 0; i < kiekis; i++) {
			for (int j = 0; j < ndKiekis; j++) {
				vidurkis += balai(mt);
			}
			iCounter++;
			vidurkis /= 3.00;
			Vardas = "Vardas" + to_string(iCounter);
			Pavarde = "Pavarde" + to_string(iCounter);
			egzas = balai(mt);
			rawfile << left << setw(20) << Vardas << setw(20) << Pavarde << setw(20) << setprecision(3) << vidurkis << egzas << endl;
			vidurkis = 0;
		}
		return outrawfile;
	}
	catch (exception& e) {
		cout << "Ivyko klaida generuojant vector tipo faila! \n";
	}
}
bool maziauk(const studentasc& a, const studentasc& b)
{
	return a.getGalutinis() < b.getGalutinis();
}
void isvedimasklases(vector<studentasc> vektorius, string failoPav = "rezultatai.txt") // isvedimas auto sugeneruotiems
{
	try {
		ofstream offile(failoPav);
		offile << "Vardas             Pavarde              Galutinis(egz.) \n";
		offile << "--------------------------------------------------------\n";
		for (int i = 0; i < vektorius.size(); i++) {
			offile << left << setw(20) << vektorius[i].getVardas() << setw(20) << vektorius[i].getPavarde() << setw(20) << setprecision(3) << vektorius[i].getGalutinis() << endl;
		}
	}
	catch (exception& e) {
		cout << "Ivyko klaida vector failo isvedime \n";
	}
}