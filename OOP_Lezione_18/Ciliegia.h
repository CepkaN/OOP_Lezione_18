#pragma once
#include"Frutti.h"

class Ciliegia: public Frutti {
	int _max;
public:
	Ciliegia();
	Ciliegia(std::string nam, std::string col, int mas, std::string gu,int max);
	~Ciliegia(){}
	void MaxQuantita();
	virtual void TempeRacolta() override;
};
