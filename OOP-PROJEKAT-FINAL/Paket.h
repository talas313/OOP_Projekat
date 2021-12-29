#pragma once
#include <string>
class Paket
{
public:
    Paket();
    std::string dimenzije;
    float tezina;
    void setTezina();
    void setDimenzije();
    float getTezina();
    std::string getDimenzije();
    void unosPaketica();
    ~Paket();

};

