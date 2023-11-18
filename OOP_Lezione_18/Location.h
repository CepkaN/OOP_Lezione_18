#pragma once
#include<iostream>
#include<vector>
#include<memory>
#include<random>
#include<ctime>
#include "Piante.h"

class Location {
private:
	std::vector<Piante*>PIANI;
public:
	void ADDDPiante() {
		std::string a1, a2, a3, a5; int a4;
		std::cout << "Введите название : ";
		std::cin >> a1;
		std::cout << " Размер : "; std::cin >> a2;
		std::cout << " Тип : "; std::cin >> a2;
		std::cout << " Количество  плодов : "; std::cin >> a4;
		std::cout << " Цвет : "; std::cin >> a5;
		Melo*PPP = new Melo(a1, a2, a3, a4, a5, " "," ");
		PIANI.push_back(PPP);
	}
	void ADDDPiante(Piante& p) {
		PIANI.push_back(&p);
	}
	void CuciaPiante() {
		srand(time(NULL));
		int a = rand() % 70 + 30;
		for (int i = 0; i < a; ++i) {
			Melo*RRR = new Melo();
			PIANI.push_back(RRR);
		}
		std::cout << " Количество деревьев : " << PIANI.size();
	}
	int COLvo() {
		int a = PIANI.size();
		return a;
	}
	void MO() {
		for(auto &g: PIANI) {
			g->MostraPian();
	}
	}
	void Remuovere() {
		int a = 0;
		for (auto& it : PIANI) {
			++a; std::cout << a << ' ';
			it->MostraPian();
		}
		std::cout << "Введите номер дерева для удаления : ";
		int b; std::cin >> b;
		PIANI.erase(PIANI.begin() + b - 1);
		std::cout << "Дерево удалено.";
	}
};
