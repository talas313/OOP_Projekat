#include<iostream>
#include<string>
#include<fstream>
#include "Osobe.h"

Osobe::Osobe()
{
	//Posiljalac
	strcpy_s(this->imePosiljalac, "Ime Posiljalac");
	strcpy_s(this->prezimePosiljalac, "Prezime Posiljalac");
	strcpy_s(this->drzavaPosiljalac, "Drzava Posiljalac");
	strcpy_s(this->gradPosiljalac, "Grad Posiljalac");
	strcpy_s(this->postanskiBrojPosiljalac, "12345");
	strcpy_s(this->adresaPosiljalac, "Adresa Posiljalac");
	strcpy_s(this->telefonPosiljalac, "06006006");
	//Primaoc
	strcpy_s(this->imePrimaoc, "Ime Primaoc");
	strcpy_s(this->prezimePrimaoc, "Prezime Primaoc");
	strcpy_s(this->drzavaPrimaoc, "Drzava Primaoc");
	strcpy_s(this->gradPrimaoc, "Grad Primaoc");
	strcpy_s(this->postanskiBrojPrimaoc, "12345");
	strcpy_s(this->adresaPrimaoc, "Adresa Primaoc");
	strcpy_s(this->telefonPrimaoc, "060060060");

}

void Osobe::setPosiljalacIme()
{
	std::cout << "Unesite ime posiljaoca: ";
	std::cin.getline(this->imePosiljalac, 30);
}

void Osobe::setPosiljalacPrezime()
{
	std::cout << "Unesite prezime posiljaoca: ";
	std::cin.getline(this->prezimePosiljalac, 30);
}

void Osobe::setPosiljalacDrzava()
{
	std::cout << "Unesite drzavu posiljaoca: ";
	std::cin.getline(this->drzavaPosiljalac, 40);
}

void Osobe::setPosiljalacGrad()
{
	std::cout << "Unesite grad posiljaoca: ";
	std::cin.getline(this->gradPosiljalac, 20);
}

void Osobe::setPosiljalacPosanskiBroj()
{
	std::cout << "Unesite postanski broj posiljaoca: ";
	std::cin >> postanskiBrojPosiljalac;
	std::cin.ignore();
}

void Osobe::setPosiljalacAdresa()
{
	std::cout << "Unesite adresu posiljaoca: ";
	std::cin.getline(this->adresaPosiljalac, 30);
}

void Osobe::setPosiljalacTelefon()
{
	std::cout << "Unesite telefon posiljaoca: ";
	std::cin.getline(this->telefonPosiljalac, 10);
	std::cin.ignore();
}

void Osobe::setPrimaocIme()
{
	std::cout << "Unesite ime primaoca: ";
	std::cin.getline(this->imePrimaoc, 30);
}

void Osobe::setPrimaocPrezime()
{
	std::cout << "Unesite prezime primaoca: ";
	std::cin.getline(this->prezimePrimaoc, 30);
}

void Osobe::setPrimaocDrzava()
{
	std::cout << "Unesite drzavu primaoca: ";
	std::cin.getline(this->drzavaPrimaoc, 40);
}

void Osobe::setPrimaocGrad()
{
	std::cout << "Unesite grad primaoca: ";
	std::cin.getline(this->gradPrimaoc, 20);
}

void Osobe::setPrimaocPostanskiBroj()
{
	std::cout << "Unesite postanski broj primaoca: ";
	std::cin >> postanskiBrojPrimaoc;
	std::cin.ignore();
}

void Osobe::setPrimaocAdresa()
{
	std::cout << "Unesite adresu primaoca :";
	std::cin.getline(this->adresaPrimaoc, 30);
}

void Osobe::setPrimaocTelefon()
{
	std::cout << "Unesite telefon primaoca: ";
	std::cin.getline(this->telefonPrimaoc, 10);
	std::cin.ignore();
}

char* Osobe::getPosiljalacIme()
{
	return this->imePosiljalac;
}

char* Osobe::getPosiljalacPrezime()
{
	return this->prezimePosiljalac;
}

char* Osobe::getPosiljalacDrzava()
{
	return this->drzavaPosiljalac;
}

char* Osobe::getPosiljalacGrad()
{
	return this->gradPosiljalac;
}

char* Osobe::getPosiljalacPosatnskiBroj()
{
	return this->postanskiBrojPosiljalac;
}

char* Osobe::getPosiljalacAdresa()
{
	return this->adresaPosiljalac;
}

char* Osobe::getPosiljalacTelefon()
{
	return this->telefonPosiljalac;
}

char* Osobe::getPrimaocIme()
{
	return this->imePrimaoc;
}

char* Osobe::getPrimaocPrezime()
{
	return this->prezimePrimaoc;
}

char* Osobe::getPrimaocDrzava()
{
	return this->drzavaPrimaoc;
}

char* Osobe::getPrimaocGrad()
{
	return this->gradPrimaoc;
}

char* Osobe::getPrimaocPosanskiBroj()
{
	return this->postanskiBrojPrimaoc;
}

char* Osobe::getPrimaocAdresa()
{
	return this->adresaPrimaoc;
}

char* Osobe::getPrimaocTelefon()
{
	return this->telefonPrimaoc;
}

void Osobe::unosOsoba()
{
	this->setPosiljalacIme();
	this->setPosiljalacPrezime();
	this->setPosiljalacDrzava();
	this ->setPosiljalacGrad();
	this->setPosiljalacPosanskiBroj();
	this->setPosiljalacAdresa();
	this->setPosiljalacTelefon();

	this->setPrimaocIme();
	this->setPrimaocPrezime();
	this->setPrimaocDrzava();
	this->setPrimaocGrad();
	this->setPrimaocPostanskiBroj();
	this->setPrimaocAdresa();
	this->setPrimaocTelefon();
}

Osobe::~Osobe()
{
}
