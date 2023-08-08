#include"Ciliegio.h"

Ciliegio::Ciliegio():Piante(),_regione("niente"){}

Ciliegio::Ciliegio(std::string na, std::string mi, std::string tip, int q, std::string co,std::string re):
Piante(na,mi,tip,q,co),_regione(re){}

void Ciliegio::FruittiPiante(){
	std::cout << "Название плода : Ciliegia\n" ;
}

void Ciliegio::Regione() {
	std::cout << "Регион произрастания : " << _regione << '\n';
}

Frutti* Ciliegio::SozdanieFr()
{
	return new Ciliegia("Ciliegia", "bordo", 80, "dolce", 5000);
}
