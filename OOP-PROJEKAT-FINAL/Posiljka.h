#include"Paket.h"
#include<memory>
#pragma once
enum vrstaPosiljke{pismo,paket,specijalna};
enum specijalnaPosiljka{prevozNovca, prevozMaterija, prevozMrtvih};

class Posiljka:public Paket
{
private:
    char dimenzije[50];
    float tezinaPosiljke;
    specijalnaPosiljka vrstaSpecijalne;
    vrstaPosiljke vrsta;
public:
    Posiljka();
    char* getDimenzijePosiljke();
    float getTezinaPosiljke();
    void setVrstaPosiljke(vrstaPosiljke vrstaPos);
    void setVrstaSpec(specijalnaPosiljka vrstaSp);
    vrstaPosiljke getVrsta();
    specijalnaPosiljka getSpecijalna();
    friend std::istream& operator>>(std::istream& stream, Posiljka& p);
    friend std::ostream& operator>>(std::ostream& stream, Posiljka& p);
    void unosPosiljke();
    ~Posiljka();
};

