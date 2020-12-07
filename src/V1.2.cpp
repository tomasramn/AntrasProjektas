#include "funkcijos.h"
int main()
{

	studentasc studentasC;

	vector<studentasc> studinfoc;
	vector<studentasc> vargsiukaic;

	chrono::time_point<chrono::system_clock> start, end;
	chrono::time_point<chrono::system_clock> startEvent, endEvent;

		cout << "Vektoriaus Testavimas(KLASES TIPO): \n\n";

		// 100 000 irasu
		studinfoc = {}; vargsiukaic = {}; // isvalom vektoriu nuo praeitu irasu
		studinfoc.clear(); vargsiukaic.clear();
		VectTestingClass(vargsiukaic, studinfoc, 100000);


		// 1 000 000 irasu
		studinfoc = {}; vargsiukaic = {}; //  // isvalom vektoriu nuo praeitu irasu
		studinfoc.clear(); vargsiukaic.clear();
		VectTestingClass(vargsiukaic, studinfoc, 1000000);
	}