#pragma once
#include<vector>
#include"Frutti.h"
#include<memory>
#include<conio.h>
#include<Windows.h>
#include<memory>
#include"Frutti.h"
//123456
class Rukzak 
{
private:
	std::vector<std::shared_ptr<Frutti>>rukz;
public:
	void AddFruct(const std::shared_ptr<Frutti>&fruct)
	{
		rukz.push_back(fruct);
	}
	


	void ShowRuk()
	{
		int index = 0;
		auto it = rukz.begin();
		auto deleted = rukz.end();

		while (true)
		{
			system("cls");

			(*it)->MostFr();
			std::cout << "\nFruct " << index + 1 << '/' << rukz.size() << std::endl << std::endl;

			std::cout << "1 - '<-'\n";
			std::cout << "2 - '->'\n";
			std::cout << "3 - 'take off'\n";

			char input = _getch();


			if (input == '1')
			{
				if (it != rukz.end() - 1)
				{
					it++;
					index++;
				}
			}

			else if (input == '2')
			{
				if (it != rukz.begin())
				{
					it--;
					index--;
				}
			}

			else if (input == '3')
			{
				deleted = it;
				break;
			}
			
		}

		if (deleted != rukz.end())
			rukz.erase(deleted);
	}
	void Remuovere() {
		int a = 0;
		for (auto& it : rukz) {
			++a; std::cout << a << ' ';
			it->MostFr();
		}
		std::cout << "Введите номер фрукта для удаления : ";
		int b; std::cin >> b;
		rukz.erase(rukz.begin() + b - 1);
		std::cout << "Фрукт удалён.";
	}


	//void Foo()
	//{
	//	/*Frutti* fruct1 = new Frutti("F", "N", 10, "P");
	//	std::unique_ptr<Frutti>fruct2 = std::make_unique<Frutti>("F", "N", 10, "P");
	//	std::unique_ptr < Frutti> fruct3 = fruct2;*/
	//	//F000xx1345315 = 0 - Reference count
	//	//Количсетво указателей который смотрят на одну и ту же ячейку памяти
	//	std::shared_ptr<Frutti>fruct = std::make_shared<Frutti>("F", "N", 10, "P");
	//	std::shared_ptr<Frutti>fruct2 = fruct;
	//}


	

};