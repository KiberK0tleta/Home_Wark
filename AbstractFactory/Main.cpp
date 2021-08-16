//#include<iostream>
//#include<string>
//
//using namespace std;
//
//#include"Factory.h"
//
//class SportCar
//{
//	Engine* engine;
//	Tank* tank;
//public:
//	SportCar(SportCarFactory* factory)
//	{
//		this->engine = factory->createEngine();
//		this->tank = factory->createTank();
//	}
//	~SportCar();
//	void info()const
//	{
//		engine->info();
//		tank->info();
//	}
//};
//
//
//
//void main()
//{
//	setlocale(LC_ALL, "Russian");
//	SportCar Lamborgini(new SportCarFactory);
//	Lamborgini.info();
//	
//}



#include<iostream>
using namespace std;

#include"Factory.h"

class SportCar
{
	Engine* engine;
	Tank* tank;
public:
	SportCar(SportCarFactory* factory)
	{
		this->engine = factory->createEngine();
		this->tank = factory->createTank();
	}
	~SportCar()
	{

	}
	void info()const
	{
		engine->info();
		tank->info();
	}
};

void main()
{
	setlocale(LC_ALL, "Russian");
	SportCar lambarghini(new SportCarFactory);
	lambarghini.info();
}