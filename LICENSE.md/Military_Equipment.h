#include <vector>	/* подключение библиотеки для работы с векторами */
#include <string>
class Characteristics // класс характеристик для техники
{
private:
	std::string type_weapon, method_movement; // свойства класса (характеристики техники)
	int power, caliber, production_year, amount, crew; // свойства класса (характеристики техники)
public:	// свойства класса доступные всем наследникам
	Characteristics()	{ // конструктор класса

	}
	~Characteristics() {};	// деструктор класса
	void settype_weapon(std::string p1) { type_weapon = p1; }
	void setmethod_movement(std::string p2) { method_movement = p2; }
	void setpower(int p3) { power = p3; }
	void setcaliber(int p4) { caliber = p4; }
	void setproduction_year(int p5) { production_year = p5; }
	void setamount(int p6) { amount = p6; }
	void setcrew(int p7) { crew = p7; }
	std::string gettype_weapon() { return type_weapon; }
	std::string getmethod_movement() { return method_movement; }
	int getpower() { return power; }
	int getcaliber() { return caliber; }
	int getproduction_year() { return production_year; }
	int getamount() { return amount; }
	int getcrew() { return crew; }
};

// абстрактные базовые классы всех возможных видов вооружения
// ----------------------------------------------------------
class Tank : public Characteristics // класс танк наследует свойства и методы из класса родителя
{
public:
	virtual void info() = 0; // чистая виртуальная функция вывода информации о технике
	~Tank() {};	// деструктор класса
};

class APC : public Characteristics
{
public:
	virtual void info() = 0;
	~APC() {};
};

class Robot : public Characteristics
{
public:
	virtual void info() = 0;
	~Robot() {};
};

class Howitzer : public Characteristics
{
public:
	virtual void info() = 0;
	~Howitzer() {};
};

class Fighter : public Characteristics
{
public:
	virtual void info() = 0;
	~Fighter() {};
};
// ----------------------------------------------------------
//Абстрактная фабрика для производства техники
class ArmyFactory
{
public:
	virtual Tank* createTank() = 0; // чистые виртуальные функции создания объектов класса
	virtual APC* createAPC() = 0;
	virtual Robot* createRobot() = 0;
	virtual Howitzer* createHowitzer() = 0;
	virtual Fighter* createFighter() = 0;
	virtual ~ArmyFactory() {}
};
// Класс, содержащий всю технику той или иной страны
class Equipment
{
public:
	std::vector <Tank*> vtank; // вектор объектов класса (русских и американских танков)
	std::vector <APC*> vapc;
	std::vector <Robot*> vrobot;
	std::vector <Howitzer*> vhowitzer;
	std::vector <Fighter*> vfighter;
	~Equipment()	{ // деструктор класса
		int i;
		for (i = 0; i < (int)vtank.size(); ++i) delete vtank[i]; // удаление элементов вектора
		for (i = 0; i < (int)vapc.size(); ++i) delete vapc[i];
		for (i = 0; i < (int)vrobot.size(); ++i) delete vrobot[i];
		for (i = 0; i < (int)vhowitzer.size(); ++i) delete vhowitzer[i];
		for (i = 0; i < (int)vfighter.size(); ++i) delete vfighter[i];
	}
	void info()	{
		int i;
		for (i = 0; i < (int)vtank.size(); ++i) vtank[i]->info(); // указатель на выполнение функции info()
		for (i = 0; i < (int)vapc.size(); ++i) vapc[i]->info();
		for (i = 0; i < (int)vrobot.size(); ++i) vrobot[i]->info();
		for (i = 0; i < (int)vhowitzer.size(); ++i) vhowitzer[i]->info();
		for (i = 0; i < (int)vfighter.size(); ++i) vfighter[i]->info();
	}
};

// Здесь создается техника той или иной страны
class Military_Equipment
{
public:
	Equipment* createArmy(ArmyFactory&factory)	{
		Equipment* p = new Equipment;
		p->vtank.push_back(factory.createTank());
		p->vapc.push_back(factory.createAPC());
		p->vrobot.push_back(factory.createRobot());
		p->vhowitzer.push_back(factory.createHowitzer());
		p->vfighter.push_back(factory.createFighter());
		return p;
	}
};

#include "Military_Equipment.hpp"
