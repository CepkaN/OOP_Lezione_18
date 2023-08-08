#pragma once
#include"Piante.h"
#include"Pomo.h"

class Melo:public Piante {
private:
	std::string _opera;
	std::string _regione;
public:
	Melo();
	Melo(std::string nam, std::string mis, std::string tip, int qua, std::string col, std::string op,std::string re);
	~Melo(){}
	void FruittiPiante()override;
	void Regione() override;
	void Opera();
	Frutti* SozdanieFr()override;


};

