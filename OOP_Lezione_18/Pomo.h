#pragma once
#include"Frutti.h"

class Pomo :public Frutti {
	int _max;
public:
	Pomo();
	Pomo(std::string nam, std::string col, int mas, std::string gu, int max);
	~Pomo(){}
	void MaxMass();
	void TempeRacolta() override;
};