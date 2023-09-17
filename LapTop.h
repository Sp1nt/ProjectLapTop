#pragma once
#include "CPU.h"
#include "SSD.h"	
#include "GPU.h"	
#include "RAM.h"	
class Laptop
{
private:
	char* model;
	char* color;
	double price;
	CPU cpu;
	SSD ssd;
	GPU gpu;
	RAM ram;
public:
    static int count;
	Laptop();
	Laptop(const char* nLP, const char* cLP, double price, const char* nCpu, const char* nSsd, const char* nGpu, const char* nRam);
	Laptop(const Laptop& obj);
	void Print();
	static int GetCount();
	~Laptop();
	void setPrice(double p);
	double getPrice();
	void setModel(const char* m);
	char* getModel();
	void setColor(const char* n);
	char* getColor();
};


