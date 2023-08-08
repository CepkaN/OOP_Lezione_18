#include "Melo.h"

Melo::Melo():Piante(),_opera("niente"){}

Melo::Melo(std::string nam, std::string mis, std::string tip, int qua, std::string col,std::string op, std::string re):
	Piante(nam,mis,tip,qua,col),_opera(op),_regione(re){}

void Melo::FruittiPiante()
{
	std::cout << "Название плода : Pomo \n";
}

void Melo::Regione()
{
	std::cout << "Регион произрастания : " << _regione << '\n';
}

void Melo::Opera()
{
	std::cout << "Произведение, в котором упоминается яблоня : " << _opera << '\n';
}

Frutti* Melo::SozdanieFr()
{
	return new Pomo("Pomo", "rosso", 200, "dolce", 500);
}
