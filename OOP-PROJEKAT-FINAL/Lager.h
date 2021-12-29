#pragma once
#include<vector>
#include"Osobe.h"
#include"Posiljka.h"

class Lager
{
private:
	std::vector<Osobe>osobe;
	std::vector<Posiljka>posiljke;
	std::vector<Paket>paketi;
public:
	Lager();
	void setOsobe();
	void setPosiljke();
	void ispisLagera();
	bool isprazniLager();
	void setPaket();
	std::vector<Osobe>& getOsobe();
	std::vector<Posiljka>& getPosiljke();
	std::vector<Paket>& getPaketi();
	void pretragaPoPrezimenuPosiljaoc();
	void pretragaPoPrezimenuPrimaoc();
	void pretragaPoGraduSvi();
	void unosUDatoteku();
	//void ucitajIzDatoteke();
	void ispisWelcome();
	~Lager();
};

