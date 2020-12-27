#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <fstream>
#include <string>
#include <iterator>
#include <chrono>
#include <random>
#include <list>

using namespace std;

#include "struktura.h"
// V1.1
void VectTestingClass(vector <studentasc>& vargsiukai, vector <studentasc>& studinfo, int kiekis);
string generuotiklase(int kiekis);
void nuskaitytiklase(vector<studentasc>& studinfo, int kiekis, string failas);
void rusiuotiklase(vector<studentasc>& studinfo);
void surusiuok3klase(vector<studentasc>& studinfo, vector<studentasc>& vargsiukai);
void calculateFinal_ForClass(vector<studentasc>& studinfo, int kiekis);
void isvedimasklases(vector<studentasc> vektorius, string failoPav);
bool arlygu5klase(const studentasc& v);
bool maziauk(const studentasc& a, const studentasc& b);