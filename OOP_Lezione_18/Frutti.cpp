#include "Frutti.h"

Frutti::Frutti():_frname("niente"),_colorfr("niente"),_massfr(0),_gusto("niente"){}

Frutti::Frutti(std::string nam, std::string col, int mas, std::string gu):_frname(nam), _colorfr(col), _massfr(mas), _gusto(gu){}


void Frutti::SetNamFr(std::string nam){
	_frname = nam;
}

void Frutti::SetColFr(std::string col){
	_colorfr = col;
}

void Frutti::SetMasFr(int mas){
	_massfr = mas;
}

void Frutti::SetGust(std::string gu){
	_gusto = gu;
}

std::string Frutti::GetFrname(){
	return _frname;
}

std::string Frutti::GetColorfr(){
	return _colorfr;
}

int Frutti::GetMassfr(){
	return _massfr;
}

std::string Frutti::GetGusto(){
	return _gusto;
}

void Frutti::MostFr(){
	std::cout << "Название : " << _frname << '\n';
	std::cout << "Цвет : " << _colorfr << '\n';
	std::cout << "Масса плодов : " << _massfr << '\n';
	std::cout << "Вкус : " << _gusto << '\n';
}
