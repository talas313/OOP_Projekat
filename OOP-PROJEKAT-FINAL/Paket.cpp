#include<iostream>
#include "Paket.h"

Paket::Paket()
{
}

void Paket::setTezina()
{
	std::cout << "Unesite tezinu paketa u kg\nprimjer: 2.72kg: ";
	std::cin >> this->tezina;
	std::cin.ignore();
}

void Paket::setDimenzije()
{
	std::cout << "Unesite dimenzije paketa u cm:\nprimjer: 20x30x10: ";
	getline(std::cin, this->dimenzije);
}

float Paket::getTezina()
{
	return this->tezina;
}

std::string Paket::getDimenzije()
{
	return this->dimenzije;
}

void Paket::unosPaketica()
{
	this->setDimenzije();
	this->setTezina();
}

Paket::~Paket()
{
	
}

