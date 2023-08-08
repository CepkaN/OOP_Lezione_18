#pragma once
#include"Piante.h"
#include"Ciliegia.h"

class Ciliegio :public Piante{
private:
	std::string _regione;
public:
	Ciliegio();
	Ciliegio(std::string na, std::string mi, std::string tip, int q, std::string co,std::string re);
	~Ciliegio(){}
	void FruittiPiante()override;
	void Regione() override;
	Frutti* SozdanieFr()override;

};
