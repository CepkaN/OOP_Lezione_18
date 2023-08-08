#pragma once
#include<iostream>
#include"Frutti.h"

class Piante {
protected:
	std::string _name;
	std::string _misura;
	std::string _tipo;
	int _quantitaFr;
	std::string _color;
public:
	Piante();
	Piante(std::string nam, std::string mis, std::string tip, int qua, std::string col);
	virtual ~Piante(){}
	void SetName(std::string nam);
	void SetMis(std::string mis);
	void SetTip(std::string tip);
	void SetQuan(int q);
	void SetCol(std::string col);
	std::string GetName( );
	std::string GetMisura();
	std::string GetTipo( );
	int GetQuantitaFr();
	 std::string GetCol();
	virtual void VarMisur(double alto);
	virtual void MostraPian();
	virtual void FruittiPiante() = 0;
	virtual void Regione()=0;
	virtual Frutti* SozdanieFr() = 0;
};