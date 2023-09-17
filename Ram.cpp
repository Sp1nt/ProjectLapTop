#include <iostream>		
#include "RAM.h"	
using namespace std;

RAM::RAM()
{
	nameRAM = nullptr;
}

RAM::RAM(const char* nRam)
{
	nameRAM = new char[strlen(nRam) + 1];
	strcpy_s(nameRAM, strlen(nRam) + 1, nRam);
}
RAM::RAM(const RAM& obj)
{
	nameRAM = new char[strlen(obj.nameRAM) + 1];
	strcpy_s(nameRAM, strlen(obj.nameRAM) + 1, obj.nameRAM);
	cout << "Copy construcor RAM" << endl;
}

void RAM::Print()
{
	cout << "RAM: " << nameRAM << endl;
}

void RAM::setName(const char* nRam)
{
	if (nameRAM != nullptr)
	{
		delete[] nameRAM;
	}
	nameRAM = new char[strlen(nRam) + 1];
	strcpy_s(nameRAM, strlen(nRam) + 1, nRam);
}
char* RAM::getName()
{
	return nameRAM;
}

RAM::~RAM()
{
	delete[] nameRAM;
}