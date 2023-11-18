#pragma once
#include<iostream>
#include"Rukzak.h"
#include"Location.h"
#include"Pomo.h"

class Inter {
public:	
	void virtual Function(Rukzak& h) = 0;
	void virtual Function(Location& L) = 0;

};
class Igrok:public Inter {
public:
	void Function(Rukzak& ruk)override {
		std::cout << "\n Добавление / удаление плодов из рюкзака \n";
		int a;
		std::cin >> a;
		if (a == 0) {
			ruk.Remuovere();// позволяет добавлять и удалять плоды из рюкзака
		}
		else {
			std::shared_ptr<Pomo>pomo11 = std::make_shared<Pomo>("pomo", "red", 500, "gu", 1000);
			ruk.AddFruct(pomo11);
		}
	}
	void Function(Location& loc)override {
		std::cout << " \n ПРосмотр деревьев\n";
		loc.MO(); // позволяет просматривать деревья
	}
};
class Igra:public Inter {
public:
	void Function(Rukzak& ruk)override {
		std::cout << "\n Просмотр рюкзака \n";
		ruk.ShowRuk(); // только просматривать содержимое без изменений

	}
	void Function(Location& loc) override {
		std::cout << " \n Добавление / удаление деревьев\n";
		int a;
		std::cin >> a;
		if (a == 0) {
			loc.ADDDPiante();// позволяет добавлять и удалять деревья с локации
		}
		else {
			loc.Remuovere();
		}
	}
};
