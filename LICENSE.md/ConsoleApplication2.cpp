#include "stdafx.h" 
#include <iostream> 
#include <fstream> 
#include <vector>	
#include "Military_Equipment.h"
#include <clocale> 
#include <string>
// Вариант задания - 10 (паттерн "Абстрактная фабрика" - это логическое расширение фабричного метода)

/* Будет создано 2 фабрики "Россия" "США"
	также будет сздано 5 видов техники - боевой танк, бронетранспортер, боевой робот, гаубица и истребитель*/

void info_equipment(std::string, Characteristics*); // функция считывания информации из файлов
int main(int argc, char* argv[]) // параметры функции main, вводимые через командную строку.
{
	setlocale(LC_ALL, "rus"); // подключение русского языка в консоли
	Military_Equipment military_equipment; // создание объекта класса Military_Equipment
	RusArmyFactory ra_factory; // создание объекта класса RusArmyFactory
	USAArmyFactory ua_factory; // создание объекта класса USAArmyFactory
	Equipment * ra = military_equipment.createArmy(ra_factory);
	Equipment * ua = military_equipment.createArmy(ua_factory);
	std::cout << "Создание военной техники:" << std::endl;
	std::cout << "|1|Создание боевого танка:" << std::endl;
	std::cout << "|2|Создание бронетранспортера:" << std::endl;
	std::cout << "|3|Создание боевого робота:" << std::endl;
	std::cout << "|4|Создание гаубицы:" << std::endl;
	std::cout << "|5|Создание истребителя:" << std::endl;
	std::cout << "|6|Создание военной техники из файла-каталога:" << std::endl;
	std::cout << "|0|Выход из приложения:" << std::endl;


	std::vector<Equipment*> Equipments;

	info_equipment("ra_apc.txt", ra->vapc[0]);
	info_equipment("ra_tank.txt", ra->vtank[0]);
	info_equipment("ra_robot.txt", ra->vrobot[0]);
	info_equipment("ra_howitzer.txt", ra->vhowitzer[0]);
	info_equipment("ra_fighter.txt", ra->vfighter[0]);

	ra->vtank[0]->info();
	ra->vapc[0]->info();
	ra->vrobot[0]->info();
	ra->vhowitzer[0]->info();
	ra->vfighter[0]->info();

	info_equipment("ua_apc.txt", ua->vapc[0]);
	info_equipment("ua_tank.txt", ua->vtank[0]);
	info_equipment("ua_robot.txt", ua->vrobot[0]);
	info_equipment("ua_howitzer.txt", ua->vhowitzer[0]);
	info_equipment("ua_fighter.txt", ua->vfighter[0]);

	ua->vtank[0]->info();
	ua->vapc[0]->info();
	ua->vrobot[0]->info();
	ua->vhowitzer[0]->info();
	ua->vfighter[0]->info();

	return 0; 
}
void info_equipment(std::string file_name, Characteristics* object){ // входные параметры - имя файла иуказатель на тип техники характеристики которой считываются ниже
	std::ifstream fin(file_name); 
	std::string str; // строка куда будет считываться информация
	std::getline(fin, str); 
	object->setpower(atoi(str.c_str())); // инициализация элементов данных atoi - преобразование строки в int
	std::getline(fin, str);
	object->settype_weapon(str);
	std::getline(fin, str);
	object->setcaliber(atoi(str.c_str()));
	std::getline(fin, str);
	object->setmethod_movement(str);
	std::getline(fin, str);
	object->setproduction_year(atoi(str.c_str()));
	std::getline(fin, str);
	object->setamount(atoi(str.c_str()));
	std::getline(fin, str);
	object->setcrew(atoi(str.c_str()));
	fin.close();
}
