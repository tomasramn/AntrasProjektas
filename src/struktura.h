class zmogus {
protected:
	string Vardas;
	string Pavarde;
public:
	virtual string getVardas() = 0;
	virtual string getPavarde() = 0;
};
class studentasc: public zmogus {
private:
	int Egzaminas, ndKiekis = 0;
	vector<float> paz;
	double vidurkis = 0 , galutinis = 0;

public:
	studentasc() : Egzaminas(0) { } //default konstruktorius

	studentasc(string Vardas, string Pavarde, double vidurkis, double Egzaminas) {
		setValues(Vardas, Pavarde, vidurkis, Egzaminas);
	}

	//destruktorius
	~studentasc() {}

	//copy assignment operator:

	studentasc& operatorius(const studentasc& obj) {
		Vardas = obj.Vardas;
		Pavarde = obj.Pavarde;
		vidurkis = obj.vidurkis;
		Egzaminas = obj.Egzaminas;
		galutinis = obj.galutinis;
		return *this;
	}

	void setValues(string Vardas, string Pavarde, double vidurkis, double Egzaminas) {
		this->Vardas = Vardas;
		this->Pavarde = Pavarde;
		this->vidurkis = vidurkis;
		this->Egzaminas = Egzaminas; // SETTERIAI
	}
	void setGalutinis() {
		this->galutinis = 0.4 * this->vidurkis + 0.6 * this->Egzaminas;
	}
	string getVardas() override { return Vardas; }
	string getPavarde() override { return Pavarde; }
	float getGalutinis() const { return galutinis; }
};