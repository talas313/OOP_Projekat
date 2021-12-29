#include<iostream>
#include<memory>
#include"Lager.h"

void ucitavanje();

int main() {
	system("COLOR F3");
	ucitavanje();
	Lager lager;
	std::unique_ptr<Lager>sp(new Lager{});
	int izbor, subIzbor;
	do {
		system("cls");
		sp->ispisWelcome();
		std::cout << char(201);      for (int i = 0; i < 21; i++) { std::cout << char(205); }      std::cout << char(187) << std::endl;
		std::cout << char(186) << " 1. Posalji paket    " << char(186) << std::endl;
		std::cout << char(186) << " 2. Ispis lagera     " << char(186) << std::endl;
		std::cout << char(186) << " 3. Izvrsni program  " << char(186) << std::endl;
		std::cout << char(186) << " 4. Isprazni lager   " << char(186) << std::endl;
		std::cout << char(186) << " 5. Kraj             " << char(186) << std::endl;
		std::cout << char(200);      for (int i = 0; i < 21; i++) { std::cout << char(205); }      std::cout << char(188) << std::endl;
		std::cout << "Izbor: ";
		std::cin >> izbor;
		std::cin.ignore();
		if (izbor == 1) {
			system("cls");
			lager.setOsobe();
			system("cls");
			lager.setPosiljke();
			system("cls");
			lager.unosUDatoteku();
		}
		else if (izbor == 2) {
			ucitavanje();
			system("cls");
			lager.ispisLagera();
			system("pause");
		}
		else if (izbor == 3) {
			system("cls");
			do {
				std::cout << "\n\tPretraga korisnika:\n\t\t1. Pretraga posiljaoca po prezimenu\n\t\t2. Pretraga primaoca po prezimenu\n\t\t3. Pretraga po gradu (svi)\n\t\t4. Vrati se na glavni meni\n\t\Izbor: ";
				std::cin >> subIzbor;
				std::cin.ignore();
				if (subIzbor == 1) {
					system("cls");
					lager.pretragaPoPrezimenuPosiljaoc();
					system("pause");
					system("cls");
				}
				else if (subIzbor == 2) {
					system("cls");
					lager.pretragaPoPrezimenuPrimaoc();
					system("pause");
					system("cls");
				}
				else if (subIzbor == 3) {
					system("cls");
					lager.pretragaPoGraduSvi();
					system("pause");
					system("cls");
				}
				
			} while (subIzbor != 4);
		} else if (izbor == 4) {
			system("cls");
			lager.isprazniLager();
			system("pause");
			system("cls");
		}
	} while (izbor != 5);
	system("cls");
	ucitavanje();
	system("cls");
	std::cout << "----------------------------\n";
	std::cout << "\tDovidjenja!\n";
	std::cout << "----------------------------\n";
	std::cout << "\n";
	std::cout << "Zavrsni projekat iz OOP 2020./2021.\n";
	system("pause");
	system("cls");
	return 0;
}

void ucitavanje() {
	int i, j, a;
	printf("Ucitavanje");
	for (i = 0; i <= 6; i++) {
		for (j = 0; j < 100000000; j++) {
			a = j;
		}
		printf(".");
	}
	system("cls");
}
