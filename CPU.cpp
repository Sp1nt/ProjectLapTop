#include <iostream>
#include "CPU.h"		
using namespace std;

CPU::CPU()
{
	nameCPU = nullptr;

}
CPU::CPU(const char* nCpu)
{
	nameCPU = new char[strlen(nCpu) + 1];
	strcpy_s(nameCPU, strlen(nCpu) + 1, nCpu);
}

CPU::CPU(const CPU& obj)
{
	nameCPU = new char[strlen(obj.nameCPU) + 1];
	strcpy_s(nameCPU, strlen(obj.nameCPU) + 1, obj.nameCPU);
	cout << "Copy constructor CPU" << endl;
}

void CPU::Print()
{
	cout << "CPU: " << nameCPU << endl;
}

void CPU::setName(const char* nCpu)
{
	if (nameCPU != nullptr)
	{
		delete[] nameCPU;
	}
	nameCPU = new char[strlen(nCpu) + 1];
	strcpy_s(nameCPU, strlen(nCpu) + 1, nCpu);
}
char* CPU::getName()
{
	return nameCPU;
}

CPU::~CPU()
{
	delete[] nameCPU;
}
