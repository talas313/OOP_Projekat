#include<iostream>
#include<iomanip>
#include<fstream>
#include "Lager.h"

Lager::Lager()
{

}

void Lager::setOsobe()
{
	Osobe* osobe = new Osobe();
	osobe->unosOsoba();
	this->getOsobe().push_back(*osobe);
	delete osobe;
}

void Lager::setPaket() {
	Paket* paket = new Paket();
	paket->unosPaketica();
	this->getPaketi().push_back(*paket);
	delete paket;
}

void Lager::setPosiljke()
{
	Posiljka* posiljke = new Posiljka();
	posiljke->unosPosiljke();
	this->getPosiljke().push_back(*posiljke);
	delete posiljke;
}

void Lager::ispisLagera()
{
	if (this->getOsobe().size() == 0) {
		std::cout << "\n------------------\n";
		std::cout << "Lager je prazan!\n";
		std::cout << "------------------\n";
	}
	else {
		Osobe* o = new Osobe();
		Posiljka* p = new Posiljka();
		Paket* pk = new Paket();
		std::cout << "\n\t\t\tPOSILJALAC\t\t\t" << "\tPRIMAOC\t\t\t";
		std::cout << "\n--------------------------------------------------------------------------------------------------------\n";
		for (int i = 0; i < this->getPosiljke().size(); i++) {
			*o = this->getOsobe()[i];
			*p = this->getPosiljke()[i];
			std::cout << std::endl;
			std::cout << "IME:\t\t\t" << std::left << std::setw(40) << o->getPosiljalacIme() << std::setw(40) << o->getPrimaocIme() << std::endl;
			std::cout << "PREZIME:\t\t" << std::setw(40) << o->getPosiljalacPrezime() << std::setw(40) << o->getPrimaocPrezime() << std::endl;
			std::cout << "DRZAVA:\t\t\t" << std::setw(40) << o->getPosiljalacDrzava() << std::setw(40) << o->getPrimaocDrzava() << std::endl;
			std::cout << "GRAD:\t\t\t" << std::setw(40) << o->getPosiljalacGrad() << std::setw(40) << o->getPrimaocGrad() << std::endl;
			std::cout << "PB:\t\t\t" << std::setw(40) << o->getPosiljalacPosatnskiBroj() << std::setw(40) << o->getPrimaocPosanskiBroj() << std::endl;
			std::cout << "ADRESA:\t\t\t" << std::setw(40) << o->getPosiljalacAdresa() << std::setw(40) << o->getPrimaocAdresa() << std::endl;
			std::cout << "TELEFON:\t\t" << std::setw(40) << o->getPosiljalacTelefon() << std::setw(40) << o->getPrimaocTelefon() << std::endl;
			std::cout << "VRSTA:\t\t\t" << std::setw(40);
			if (p->getVrsta() == pismo)
				std::cout << "Pismo";
			else if (p->getVrsta() == paket)
				std::cout << "Paket";
			else if (p->getVrsta() == specijalna)
				std::cout << "Specijalna posiljka";
			else
				std::cout << "Nepoznata vrsta!";
			std::cout << "\n--------------------------------------------------------------------------------------------------------\n";
		}
	}
}

bool Lager::isprazniLager()
{
	bool prazan = false;
	try {
		for (int i = 0; i < this->getOsobe().size(); i++) {
			if (this->getOsobe().size() != 0) {
				getOsobe().clear();
				getPosiljke().clear();
				std::cout << "Lager uspjesno ispraznjen!\n";
				prazan = true;
			}
		}
		if (!prazan) {
			throw "Nemoguce isprazniti prazan lager osim u slucaju da niste Dejvid Koperfild hehe\n";
		}
	}
	catch (const char* greska) {
		std::cout << "!GRESKA!" << greska << "\n";
	}
	catch (...) {
		std::cout << "!NEPOZNATA GRESKA\n";
	}
}

std::vector<Osobe>& Lager::getOsobe()
{
	return this->osobe;
}

std::vector<Posiljka>& Lager::getPosiljke()
{
	return this->posiljke;
}

std::vector<Paket>& Lager::getPaketi()
{
	return this->paketi;
}

void Lager::pretragaPoPrezimenuPosiljaoc()
{
	if (this->getOsobe().size() == 0)
		std::cout << "Lager je prazan!\n";
	else {
		char pretragaPrezime[30];
		std::cout << "Unesite prezime posiljaoca: ";
		std::cin.getline(pretragaPrezime, 30);
Lager* temp = new Lager();
for (int i = 0; i < this->getPosiljke().size(); i++) {
	if (_strcmpi(this->getOsobe()[i].getPosiljalacPrezime(), pretragaPrezime) == 0) {
		temp->getPosiljke().push_back(this->getPosiljke()[i]);
		temp->getOsobe().push_back(this->getOsobe()[i]);
	}
}
if (temp->getOsobe().size() == 0) {
	std::cout << "Ne postoji posiljaoc sa prezimenom: " << pretragaPrezime << " !\n";
}
else {
	system("cls");
	std::cout << "\n\t\t\tPOSILJAOC";
	std::cout << "\n-----------------------------------------------------------------\n";
	for (int i = 0; i < temp->getOsobe().size(); i++)
	{
		std::cout << std::endl;
		std::cout << "IME:\t\t\t" << std::left << std::setw(40) << temp->getOsobe()[i].getPosiljalacIme() << std::endl;
		std::cout << "PREZIME:\t\t" << std::setw(40) << temp->getOsobe()[i].getPosiljalacPrezime() << std::endl;
		std::cout << "DRZAVA:\t\t\t" << std::setw(40) << temp->getOsobe()[i].getPosiljalacDrzava() << std::endl;
		std::cout << "GRAD:\t\t\t" << std::setw(40) << temp->getOsobe()[i].getPosiljalacGrad() << std::endl;
		std::cout << "PB:\t\t\t" << std::setw(40) << temp->getOsobe()[i].getPosiljalacPosatnskiBroj() << std::endl;
		std::cout << "ADRESA:\t\t\t" << std::setw(40) << temp->getOsobe()[i].getPosiljalacAdresa() << std::endl;
		std::cout << "TELEFON:\t\t" << std::setw(40) << temp->getOsobe()[i].getPosiljalacTelefon() << std::endl;
		std::cout << "VRSTA:\t\t\t" << std::setw(40);
		if (temp->getPosiljke()[i].getVrsta() == pismo)
			std::cout << "Pismo";
		else if (temp->getPosiljke()[i].getVrsta() == paket)
			std::cout << "Paket";
		else if (temp->getPosiljke()[i].getVrsta() == specijalna)
			std::cout << "Specijalna posiljka";
		else
			std::cout << "Nepoznata vrsta!";
		std::cout << "\n-----------------------------------------------------------------\n";
	}
}
delete temp;
	}
}

void Lager::pretragaPoPrezimenuPrimaoc()
{
	if (this->getOsobe().size() == 0)
		std::cout << "Lager je prazan!\n";
	else {
		char pretragaPrezime[30];
		std::cout << "Unesite prezime primaoca: ";
		std::cin.getline(pretragaPrezime, 30);
		Lager* temp = new Lager();
		for (int i = 0; i < this->getPosiljke().size(); i++) {
			if (_strcmpi(this->getOsobe()[i].getPrimaocPrezime(), pretragaPrezime) == 0) {
				temp->getPosiljke().push_back(this->getPosiljke()[i]);
				temp->getOsobe().push_back(this->getOsobe()[i]);
			}
		}
		if (temp->getOsobe().size() == 0) {
			std::cout << "Ne postoji primaoc sa prezimenom: " << pretragaPrezime << " !\n";
		}
		else {
			system("cls");
			std::cout << "\n\t\t\tPRIMAOC";
			std::cout << "\n-----------------------------------------------------------------\n";
			for (int i = 0; i < temp->getOsobe().size(); i++)
			{
				std::cout << std::endl;
				std::cout << "IME:\t\t\t" << std::left << std::setw(40) << temp->getOsobe()[i].getPrimaocIme() << std::endl;
				std::cout << "PREZIME:\t\t" << std::setw(40) << temp->getOsobe()[i].getPrimaocPrezime() << std::endl;
				std::cout << "DRZAVA:\t\t\t" << std::setw(40) << temp->getOsobe()[i].getPrimaocDrzava() << std::endl;
				std::cout << "GRAD:\t\t\t" << std::setw(40) << temp->getOsobe()[i].getPrimaocGrad() << std::endl;
				std::cout << "PB:\t\t\t" << std::setw(40) << temp->getOsobe()[i].getPrimaocPosanskiBroj() << std::endl;
				std::cout << "ADRESA:\t\t\t" << std::setw(40) << temp->getOsobe()[i].getPrimaocAdresa() << std::endl;
				std::cout << "TELEFON:\t\t" << std::setw(40) << temp->getOsobe()[i].getPrimaocTelefon() << std::endl;
				std::cout << "VRSTA:\t\t\t" << std::setw(40);
				if (temp->getPosiljke()[i].getVrsta() == pismo)
					std::cout << "Pismo";
				else if (temp->getPosiljke()[i].getVrsta() == paket)
					std::cout << "Paket";
				else if (temp->getPosiljke()[i].getVrsta() == specijalna)
					std::cout << "Specijalna posiljka";
				else
					std::cout << "Nepoznata vrsta!";
				std::cout << "\n--------------------------------------------------------------------------------------------------\n";
			}
		}
		delete temp;
	}
}

void Lager::pretragaPoGraduSvi()
{
	char GradPretraga[30];
	if (this->getOsobe().size() == 0)
		std::cout << "Lager je prazan!\n";
	else {
		std::cout << "Unesite grad koji zelite provjeriti da li postoji u lageru: ";
		std::cin.getline(GradPretraga, 300);
		Lager* temp = new Lager();

		for (int i = 0; i < this->getOsobe().size(); i++) {
			if ((_strcmpi(this->getOsobe()[i].getPosiljalacGrad(), GradPretraga) == 0)||(_strcmpi(this->getOsobe()[i].getPrimaocGrad(), GradPretraga) == 0)) {
					temp->getOsobe().push_back(this->getOsobe()[i]);
			}
		}
		if (temp->getOsobe().size() == 0) {
				std::cout << "Ne postoji trazeni (" << GradPretraga <<") grad u lageru!" <<" !\n";
		}
		else {
			this->ispisLagera();
		}
		
		delete temp;
	}
}

void Lager::unosUDatoteku() {
	std::ofstream datoteka("lager.txt");
	for (int i = 0; i < posiljke.size(); i++) {
		datoteka << osobe[i].getPosiljalacIme() << " " << osobe[i].getPosiljalacPrezime() << std::endl;
	}
}

void Lager::ispisWelcome()
{
	std::cout << "Dobro dosli u Whoosh!\n";
}

Lager::~Lager()
{
}
