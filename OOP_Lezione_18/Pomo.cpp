#include "Pomo.h"

Pomo::Pomo():Frutti(),_max(0){}

Pomo::Pomo(std::string nam, std::string col, int mas, std::string gu, int max):
	Frutti(nam,col,mas,gu),_max(max){}

void Pomo::MaxMass()
{
	std::cout << "Максимальный вес плода : " << _max << '\n';
}

void Pomo::TempeRacolta()
{
	std::cout << "Время сбора урожая - конец лета \n";
}
