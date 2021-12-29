#pragma once
class Osobe
{
private:
	//Posiljalac
	char adresaPosiljalac[30], telefonPosiljalac[10];
	//Primaoc
	char adresaPrimaoc[30], telefonPrimaoc[10];
public:
	Osobe();
	//Posiljalac
	char imePosiljalac[30], prezimePosiljalac[30], drzavaPosiljalac[40], gradPosiljalac[20], postanskiBrojPosiljalac[6];
	//Primaoc
	char imePrimaoc[30], prezimePrimaoc[30], drzavaPrimaoc[40], gradPrimaoc[20], postanskiBrojPrimaoc[6];
	//PosiljalacSet
	void setPosiljalacIme();
	void setPosiljalacPrezime();
	void setPosiljalacDrzava();
	void setPosiljalacGrad();
	void setPosiljalacPosanskiBroj();
	void setPosiljalacAdresa();
	void setPosiljalacTelefon();
	//PrimaocSet
	void setPrimaocIme();
	void setPrimaocPrezime();
	void setPrimaocDrzava();
	void setPrimaocGrad();
	void setPrimaocPostanskiBroj();
	void setPrimaocAdresa();
	void setPrimaocTelefon();
	//PosiljalacGet
	char* getPosiljalacIme();
	char* getPosiljalacPrezime();
	char* getPosiljalacDrzava();
	char* getPosiljalacGrad();
	char* getPosiljalacPosatnskiBroj();
	char* getPosiljalacAdresa();
	char* getPosiljalacTelefon();
	//PrimaocGet
	char* getPrimaocIme();
	char* getPrimaocPrezime();
	char* getPrimaocDrzava();
	char* getPrimaocGrad();
	char* getPrimaocPosanskiBroj();
	char* getPrimaocAdresa();
	char* getPrimaocTelefon();
	void unosOsoba();
	~Osobe();
};

