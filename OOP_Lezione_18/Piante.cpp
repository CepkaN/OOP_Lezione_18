#include "Piante.h"
#include<iostream>

Piante::Piante() :_name("niente"), _misura("niente"), _tipo("niente"), _quantitaFr(0), _color("niente") {
}

Piante::Piante(std::string nam, std::string mis, std::string tip, int qua, std::string col):
	_name(nam), _misura(mis), _tipo(tip), _quantitaFr(qua), _color(col){}

void Piante::SetName(std::string nam){
	this->_name = nam;
}

void Piante::SetMis(std::string mis){
	_misura = mis;
}

void Piante::SetTip(std::string tip){
	this->_tipo = tip;
}

void Piante::SetQuan(int q){
	this->_quantitaFr = q;
}

void Piante::SetCol(std::string col){
	this->_color = col;
}

std::string Piante::GetName(){
	return _name;
}

std::string Piante::GetMisura( ){
	return _misura;
}

std::string Piante::GetTipo(){
	return _tipo;
}

int Piante::GetQuantitaFr(){
	return _quantitaFr;
}

std::string Piante::GetCol(){
	return _color;
}

void Piante::VarMisur(double alto){
	if (alto > 2.0) {
		this->SetMis("большой");
		return;
	}
	if (alto < 2.0 && alto>1.0) {
		this->SetMis("средний");
		return;
	}
	if (alto < 1.0) {
		 this->SetMis("маленький");
		return;
	}
}

void Piante::MostraPian(){
	std::cout << "Название : " << _name << '\n';
	std::cout << "Размер : " << _misura << '\n';
	std::cout << "Тип : " << _tipo << '\n';
	std::cout << "Количество плодов : " << _quantitaFr << '\n';
	std::cout << "Цвет : " << _color << '\n';
}
