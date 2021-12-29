#include<iostream>
#include "Posiljka.h"
Posiljka::Posiljka()
{
	strcpy_s(this->dimenzije,"10x20x30");
	this->tezinaPosiljke = 0.0f;
	this->vrsta = paket;
	this->vrstaSpecijalne = prevozNovca;
	
}


char* Posiljka::getDimenzijePosiljke()
{
	return this->dimenzije;
}

float Posiljka::getTezinaPosiljke()
{
	return this->tezinaPosiljke;
}

void Posiljka::setVrstaPosiljke(vrstaPosiljke vrstaPos)
{
	this->vrsta = vrstaPos;
}

void Posiljka::setVrstaSpec(specijalnaPosiljka vrstaSp)
{
	this->vrstaSpecijalne = vrstaSp;
}

vrstaPosiljke Posiljka::getVrsta()
{
	return this->vrsta;
}

specijalnaPosiljka Posiljka::getSpecijalna()
{
	return this->vrstaSpecijalne;
}


std::istream& operator>>(std::istream& stream, Posiljka& p)
{
	p.setDimenzije();
	p.setTezina();
	return stream;
}

std::ostream& operator>>(std::ostream& stream, Posiljka& p)
{
	stream << p.getDimenzije() << " " << p.getTezina();
	return stream;
}

void Posiljka::unosPosiljke()
{
	Paket po;
	std::cout << "Odaberite sta zelite da posaljete:\n\t1. Pismo\n\t2. Paket\n\t3. Specijalnu posiljku\n";
	int izbor, izbor2;
	std::cout << "Izbor: ";
	std::cin >> izbor;
	std::cin.ignore();
	if (izbor == 1)
		this->setVrstaPosiljke(pismo);
	if (izbor == 2) {
		this->setVrstaPosiljke(paket);
		po.unosPaketica();
	}
	else if (izbor == 3) {
		this->setVrstaPosiljke(specijalna);
		std::cout << "Unesite vrstu specijalne posiljke:\n\t1. Prevoz novca\n\t2. Prevoz materija\n\t3. Prevoz mrtvih\n";
		std::cout << "Izbor: ";
		std::cin >> izbor2;
		std::cin.ignore();
		if (izbor2 == 1) {
			this->setVrstaSpec(prevozNovca);
		}
		else if (izbor2 == 2) {
			this->setVrstaSpec(prevozMaterija);
		}
		else if (izbor2 == 3) {
			this->setVrstaSpec(prevozMrtvih);
		}
	}
}

Posiljka::~Posiljka()
{
}
