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

#define DYDIS 50//DYDIS YRA 50 ELEMENTU MASYVAS
using namespace std;
#include "struktura.h"
double findMedian(vector<int> v, int n);
void pasirink();
void spausdink(vector<studentas> i, int sk, int pasirinkimas);
string generuoti(vector<studentas>& studinfo, int kiekis);
void nuskaityti(vector<studentas>& studinfo, int kiekis, string failas);
void surusiuok(vector<studentas>& studinfo, int kiekis, int& VargsiukuKiekis, int& GalvociuKiekis, vector<studentas>& vargsiukai, vector<studentas>& galvociai);
void spausdinti(vector<studentas> vektorius, int kiekis, string failoPav);
void dalykai(vector<studentas>& vargsiukai, vector<studentas>& galvociai, vector<studentas>& studinfo, int kiekis);
void sortList(list<studentas>& studinfo, list<studentas>& vargsiukai, list<studentas>& galvociai);
bool maziau(const studentas& a, const studentas& b);
void rusiuoti(list<studentas>& studinfo, int kiekis);
void isvedimas(list<studentas>& listas, int kiekis, string failoPav);
void surusiuok(list<studentas>& studinfo, int kiekis, int& VargsiukuKiekis, int& GalvociuKiekis, list<studentas>& vargsiukai, list<studentas>& galvociai);
void nuskaityti(list<studentas>& studinfo, int kiekis, string failas);
string generuoti(list<studentas> studinfo, int kiekis);
void containerTesting(list<studentas>& vargsiukai, list<studentas>& galvociai, list<studentas>& studinfo, int kiekis);
void vectTesting(vector<studentas>& vargsiukai, vector<studentas>& galvociai, vector<studentas>& studinfo, int kiekis);
void surusiuok(vector<studentas>& studinfo, vector<studentas>& vargsiukai, vector<studentas>& galvociai);
void surusiuok2(list<studentas>& studinfo, list<studentas>& vargsiukai);
void surusiuok2(vector<studentas>& studinfo, vector<studentas>& vargsiukai);
void surusiuok3(vector<studentas>& studinfo, vector<studentas>& vargsiukai);
bool arlygu5(const studentas& v);
void rusiuoti(vector<studentas>& studinfo);
void isvedimas(vector<studentas> vektorius, string failoPav);

// V1.1
string generuotiklase(int kiekis);
void nuskaitytiklase(vector<studentasc>& studinfo, int kiekis, string failas);
void galutinisklases(vector<studentasc>& studinfo, int kiekis);
bool maziauk(const studentasc& a, const studentasc& b);
void rusiuotiklase(vector<studentasc>& studinfo);
void surusiuok3klase(vector<studentasc>& studinfo, vector<studentasc>& vargsiukai);
bool arlygu5klase(const studentasc& v);
void isvedimasklases(vector<studentasc> vektorius, string failoPav);
void VectTestingClass(vector <studentasc>& vargsiukai, vector <studentasc>& studinfo, int kiekis);
void boolCheck(bool& check);