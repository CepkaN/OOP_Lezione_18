#pragma once
#include<iostream>

class Frutti {
protected:
	std::string _frname;
	std::string _colorfr;
	int _massfr;
	std::string _gusto;
public:
	Frutti();
	Frutti(std::string nam, std::string col, int mas, std::string gu);
	virtual ~Frutti(){}
	void SetNamFr(std::string nam);
	void SetColFr(std::string col);
	void SetMasFr(int mas);
	void SetGust(std::string gu);
	std::string GetFrname( );
	std::string GetColorfr();
	int GetMassfr();
	std::string GetGusto();
	virtual void MostFr();
	virtual void TempeRacolta() = 0;
};
