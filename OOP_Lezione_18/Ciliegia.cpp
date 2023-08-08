#include "Ciliegia.h"

Ciliegia::Ciliegia():Frutti(),_max(0){}

Ciliegia::Ciliegia(std::string nam, std::string col, int mas, std::string gu, int max) :
	Frutti(nam, col, mas, gu), _max(max){}

void Ciliegia::MaxQuantita()
{
	std::cout << "Максимальное количество плодов : " << _max << '\n';
}

void Ciliegia::TempeRacolta(){
	std::cout << "Время сбора урожая - середина лета.\n";
}
