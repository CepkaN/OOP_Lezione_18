#include<iostream>
#include<vector>
#include"Piante.h"
#include"Ciliegio.h"
#include"Ciliegia.h"
#include"Melo.h"
#include"Pomo.h"
#include"Rukzak.h"

class Base {
private:
	int pri;
protected:
	int pro;
public:
	int pub;
	Base() {
		std::cout << this << " Конструктор Base  ob\n";
	}
	Base(int a,int b ,int c) :pub(a),pro(b),pri(c){
		std::cout << this << " Конструктор Base int ob\n";
	}
	virtual  ~Base() {
		std::cout << this << " Деструктор Base ob\n";
	}
	virtual int Bar(int a, bool b) = 0;
	// чистая виртуальная функция не имеет реализации.
	// превращает класс в абстрактный, все наследники которого, не имеющие своей реализации, тоже абстрактными становятся.
	// абстрактный не имеет своих объектов
};

class Derived :public Base {
	//pri - недоступен
	//pro - становится защищенным
	//pub - остаётся публичным
public:
	void bar() {
		this->pro;
		this->pub;
	}
	Derived():Base() {
		std::cout << this << " Конструктор Derived  ob\n";
	}
	Derived(int a, int b, int c) :Base(a,b,c) {
		std::cout << this << " Конструктор Derived int  ob\n";
	}
	~Derived() override{
		std::cout << this << " Деструктор Derived ob\n";
	}
	int Bar(int a, bool b)override {
		return a | b;
	}
};
class Derived2 :protected Base {
	//pri - недоступен
	//pro pub - становится защищенным
public:
	int pole;
	Derived2() {
		std::cout << this << " Конструктор Derived2  ob\n";
	}
	~Derived2() {
		std::cout << this << " Деструктор Derived2 ob\n";
	}
	int Bar(int a, bool b)override {
		return a | b;
	}
};

class Derived3 :private Base {
	//pri - недоступен
	//pro pub - становится приватными
public:
	int pole1;
	Derived3() {
		std::cout << this << " Конструктор Derived3  ob\n";
	}
	~Derived3() {
		std::cout << this << " Деструктор Derived3 ob\n";
	}
	int Bar(int a,bool b)override {
		return a | b;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	
	//Base ob(1,7,5);
	////ob.pub;
	//Derived obDer;
	//Derived2 obDer2;
	////obDer2.pole;
	//Derived3 obDer3;


	// создать базовый классы для растений и плодов
	// класс плода должен предоставлять возможность ползователю узнавать
	// своё название (задаётся при создании). Узнавать свой вес и цвет.
	// базовый класс растения должен знать какой у него размер
	// большой или маленький, средний.
	// цвет, и сколько на нём может быть плодов.

	//Piante pia;
	////pia.MostraPian();
	//pia.VarMisur(2.4);
	//pia.MostraPian();

	//Derived ob;
	//Derived2 ob2;
	/*Derived3 ob3;

	Base* obj;
	int* p_int = new int{ 6 };
	obj = new Derived{ 2,5,6 };
	delete obj;*/

	Ciliegio cili;
	cili.MostraPian();
	std::cout << '\n';
	Ciliegio* cili2 = new Ciliegio("Ciliegio", "grand", "cespuglio", 3000, "bianco", "Europe");
	cili2->MostraPian();
	cili2->FruittiPiante();
	cili2->Regione();
	std::cout << '\n';
	Ciliegia* cia = new Ciliegia();
	cia->MostFr();
	std::cout << '\n';
	//Ciliegia* cia2 = new Ciliegia("Ciliegia", "bordo", 80, "dolce", 5000);
	Frutti* cia2 = cili2->SozdanieFr();

	cia2->MostFr();
	//cia2->MaxQuantita();
	cia2->TempeRacolta();
	std::cout << '\n';
	Melo* melo = new Melo("Melo", "grand", "arbre", 300, "verde","Meli grandi", "Asia");
	melo->MostraPian();
	melo->FruittiPiante();
	melo->Regione();
	std::cout << '\n';
	Frutti* pomo = melo->SozdanieFr();
	pomo->MostFr();
	//pomo->MaxMass();
	pomo->TempeRacolta();
	system("pause");

	Rukzak rukzak;
	std::shared_ptr<Pomo>pomo11 = std::make_shared<Pomo>("pomo","red",500,"gu",1000);
	std::shared_ptr<Ciliegia>cili11 = std::make_shared<Ciliegia>("cili", "black", 70, "rrr", 800);
	rukzak.AddFruct(pomo11);
	rukzak.AddFruct(cili11);

	
	rukzak.ShowRuk();


	return 0;
}