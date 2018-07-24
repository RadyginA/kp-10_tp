//Классы всех видов вооружения России
// ----------------------------------------------------------
class RusTank : public Tank
{
public:
	void info()	{
		std::ofstream fout("military_equipment.txt"); // файл сбора информации о произведенной технике
		fout << "<-Создан танк России->" << '\r' << '\n';
		fout << "Мощность: " << getpower() << '\r' << '\n'; // просмотр элементов данных getpower
		fout << "Тип оружия: " << gettype_weapon() << '\r' << '\n';
		fout << "Калибр: " << getcaliber() << '\r' << '\n';
		fout << "Метод передвижения: " << getmethod_movement() << '\r' << '\n';
		fout << "Год производства: " << getproduction_year() << '\r' << '\n';
		fout << "Количество: " << getamount() << '\r' << '\n';
		fout << "Экипаж: " << getcrew() << '\r' << '\n';
	}
};

class RusAPC : public APC
{
public:
	void info()	{
		std::ofstream fout("military_equipment.txt", std::ios_base::app);
		fout << "<-Создан бронетранспортер России->" << '\r' << '\n';
		fout << "Мощность: " << getpower() << '\r' << '\n';
		fout << "Тип оружия: " << gettype_weapon() << '\r' << '\n';
		fout << "Калибр: " << getcaliber() << '\r' << '\n';
		fout << "Метод передвижения: " << getmethod_movement() << '\r' << '\n';
		fout << "Год производства: " << getproduction_year() << '\r' << '\n';
		fout << "Количество: " << getamount() << '\r' << '\n';
		fout << "Экипаж: " << getcrew() << '\r' << '\n';
	}
};

class RusRobot : public Robot
{
public:
	void info()	{
		std::ofstream fout("military_equipment.txt", std::ios_base::app);
		fout << "<-Создан боевой робот России->" << '\r' << '\n';
		fout << "Мощность: " << getpower() << '\r' << '\n';
		fout << "Тип оружия: " << gettype_weapon() << '\r' << '\n';
		fout << "Калибр: " << getcaliber() << '\r' << '\n';
		fout << "Метод передвижения: " << getmethod_movement() << '\r' << '\n';
		fout << "Год производства: " << getproduction_year() << '\r' << '\n';
		fout << "Количество: " << getamount() << '\r' << '\n';
		fout << "Экипаж: " << getcrew() << '\r' << '\n';
	}
};

class RusHowitzer : public Howitzer
{
public:
	void info()	{
		std::ofstream fout("military_equipment.txt", std::ios_base::app);
		fout << "<-Создана гаубица России->" << '\r' << '\n';
		fout << "Мощность: " << getpower() << '\r' << '\n';
		fout << "Тип оружия: " << gettype_weapon() << '\r' << '\n';
		fout << "Калибр: " << getcaliber() << '\r' << '\n';
		fout << "Метод передвижения: " << getmethod_movement() << '\r' << '\n';
		fout << "Год производства: " << getproduction_year() << '\r' << '\n';
		fout << "Количество: " << getamount() << '\r' << '\n';
		fout << "Экипаж: " << getcrew() << '\r' << '\n';
	}
};

class RusFighter : public Fighter
{
public:
	void info()	{
		std::ofstream fout("military_equipment.txt", std::ios_base::app);
		fout << "<-Создан истребитель России->" << '\r' << '\n';
		fout << "Мощность: " << getpower() << '\r' << '\n';
		fout << "Тип оружия: " << gettype_weapon() << '\r' << '\n';
		fout << "Калибр: " << getcaliber() << '\r' << '\n';
		fout << "Метод передвижения: " << getmethod_movement() << '\r' << '\n';
		fout << "Год производства: " << getproduction_year() << '\r' << '\n';
		fout << "Количество: " << getamount() << '\r' << '\n';
		fout << "Экипаж: " << getcrew() << '\r' << '\n';
	}
};
// ----------------------------------------------------------

//Классы всех видов вооружения США
// ----------------------------------------------------------
class USATank : public Tank
{
public:
	void info()	{
		std::ofstream fout("military_equipment.txt", std::ios_base::app);
		fout << "<-Создан танк США->" << '\r' << '\n';
		fout << "Мощность: " << getpower() << '\r' << '\n';
		fout << "Тип оружия: " << gettype_weapon() << '\r' << '\n';
		fout << "Калибр: " << getcaliber() << '\r' << '\n';
		fout << "Метод передвижения: " << getmethod_movement() << '\r' << '\n';
		fout << "Год производства: " << getproduction_year() << '\r' << '\n';
		fout << "Количество: " << getamount() << '\r' << '\n';
		fout << "Экипаж: " << getcrew() << '\r' << '\n';
	}
};

class USAAPC : public APC
{
public:
	void info()	{
		std::ofstream fout("military_equipment.txt", std::ios_base::app);
		fout << "<-Создан бронетранспартер США->" << '\r' << '\n';
		fout << "Мощность: " << getpower() << '\r' << '\n';
		fout << "Тип оружия: " << gettype_weapon() << '\r' << '\n';
		fout << "Калибр: " << getcaliber() << '\r' << '\n';
		fout << "Метод передвижения: " << getmethod_movement() << '\r' << '\n';
		fout << "Год производства: " << getproduction_year() << '\r' << '\n';
		fout << "Количество: " << getamount() << '\r' << '\n';
		fout << "Экипаж: " << getcrew() << '\r' << '\n';
	}
};

class USARobot : public Robot
{
public:
	void info()	{
		std::ofstream fout("military_equipment.txt", std::ios_base::app);
		fout << "<-Создан боевой робот США->" << '\r' << '\n';
		fout << "Мощность: " << getpower() << '\r' << '\n';
		fout << "Тип оружия: " << gettype_weapon() << '\r' << '\n';
		fout << "Калибр: " << getcaliber() << '\r' << '\n';
		fout << "Метод передвижения: " << getmethod_movement() << '\r' << '\n';
		fout << "Год производства: " << getproduction_year() << '\r' << '\n';
		fout << "Количество: " << getamount() << '\r' << '\n';
		fout << "Экипаж: " << getcrew() << '\r' << '\n';
	}
};

class USAHowitzer : public Howitzer
{
public:
	void info()	{
		std::ofstream fout("military_equipment.txt", std::ios_base::app);
		fout << "<-Создана гаубица США->" << '\r' << '\n';
		fout << "Мощность: " << getpower() << '\r' << '\n';
		fout << "Тип оружия: " << gettype_weapon() << '\r' << '\n';
		fout << "Калибр: " << getcaliber() << '\r' << '\n';
		fout << "Метод передвижения: " << getmethod_movement() << '\r' << '\n';
		fout << "Год производства: " << getproduction_year() << '\r' << '\n';
		fout << "Количество: " << getamount() << '\r' << '\n';
		fout << "Экипаж: " << getcrew() << '\r' << '\n';
	}
};

class USAFighter : public Fighter
{
public:
	void info()	{
		std::ofstream fout("military_equipment.txt", std::ios_base::app);
		fout << "<-Создан истребитель США->" << '\r' << '\n';
		fout << "Мощность: " << getpower() << '\r' << '\n';
		fout << "Тип оружия: " << gettype_weapon() << '\r' << '\n';
		fout << "Калибр: " << getcaliber() << '\r' << '\n';
		fout << "Метод передвижения: " << getmethod_movement() << '\r' << '\n';
		fout << "Год производства: " << getproduction_year() << '\r' << '\n';
		fout << "Количество: " << getamount() << '\r' << '\n';
		fout << "Экипаж: " << getcrew() << '\r' << '\n';
	}
};
// ----------------------------------------------------------
//Фабрика для создания техники России
class RusArmyFactory : public ArmyFactory
{
public:
	Tank* createTank()	{ // выделение памяти для объекта RusTank
		return new RusTank;
	}
	APC* createAPC()	{
		return new RusAPC;
	}
	Robot* createRobot()	{
		return new RusRobot;
	}
	Howitzer* createHowitzer()	{
		return new RusHowitzer;
	}
	Fighter* createFighter()	{
		return new RusFighter;
	}
};

//Фабрика для создания техники США
class USAArmyFactory : public ArmyFactory
{
public:
	Tank* createTank()	{
		return new USATank;
	}
	APC* createAPC()	{
		return new USAAPC;
	}
	Robot* createRobot()	{
		return new USARobot;
	}
	Howitzer* createHowitzer()	{
		return new USAHowitzer;
	}
	Fighter* createFighter()	{
		return new USAFighter;
	}
};
