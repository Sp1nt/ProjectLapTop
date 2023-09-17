#include<iostream>
#include "SSD.h"
using namespace std;

SSD::SSD()
{
	nameSSD = nullptr;
}

SSD::SSD(const char* nSsd)
{
	nameSSD = new char[strlen(nSsd) + 1];
	strcpy_s(nameSSD, strlen(nSsd) + 1, nSsd);
}

SSD::SSD(const SSD& obj)
{
	nameSSD = new char[strlen(obj.nameSSD) + 1];
	strcpy_s(nameSSD, strlen(obj.nameSSD) + 1, obj.nameSSD);
	cout << "Copy constructor SSD" << endl;
}

void SSD::Print()
{
	cout << "SSD: " << nameSSD << endl;
}

void SSD::setName(const char* nSsd)
{
	if (nameSSD != nullptr)
	{
		delete[] nameSSD;
	}
	nameSSD = new char[strlen(nSsd) + 1];
	strcpy_s(nameSSD, strlen(nSsd) + 1, nSsd);
}
char* SSD::getName()
{
	return nameSSD;
}

SSD::~SSD()
{
	delete[] nameSSD;
}