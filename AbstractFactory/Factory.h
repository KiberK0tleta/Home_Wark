//#pragma once
//#include<iostream>
//using namespace std;
//
//#include"Engin.h"
//#include"Tank.h"
//
//
//class AbstractFactory
//{
//public:
//	virtual Engine* createEngine() = 0;
//	virtual Tank* createTank() = 0;
//};
//class SportCarFactory : public AbstractFactory
//{
//public:
//	Engine* createEngine()
//	{
//		return new SportEngine;
//	}
//	Tank* createTank()
//	{
//		return new SportTank;
//	}
//};
//
//class TrackFactory : public AbstractFactory
//{
//public:
//	Engine* createEngine()
//	{
//		return new TrackEngine;
//	}
//	Tank* createTank()
//	{
//		return new TrackTank;
//	}
//};


#pragma once
#include<iostream>
using namespace std;

#include"Engin.h"
#include"Tank.h"

class AbstractFactory
{
public:
	virtual Engine* createEngine() = 0;
	virtual Tank* createTank() = 0;
};

class SportCarFactory :public AbstractFactory
{
public:
	Engine* createEngine()
	{
		return new SportEngine;
	}
	Tank* createTank()
	{
		return new SportTank;
	}
};

class TrackFactory :public AbstractFactory
{
	Engine* createEngine()
	{
		return new TruckEngine;
	}
	Tank* createTank()
	{
		return new TruckTank;
	}
};


