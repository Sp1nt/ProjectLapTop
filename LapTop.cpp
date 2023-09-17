#include <iostream>
#include "LapTop.h"
using namespace std;

Laptop::Laptop()
{
	count++;
	price = 0;
	model = nullptr;
	color = nullptr;
}

Laptop::Laptop(const char* nLP, const char* cLP, double price, const char* nCpu, const char* nSsd, const char* nGpu, const char* nRam) :
	cpu(nCpu), ssd(nSsd), gpu(nGpu), ram(nRam)
{
	count++;
	model = new char[strlen(nLP) + 1];
	strcpy_s(model, strlen(nLP) + 1, nLP);

	color = new char[strlen(cLP) + 1];
	strcpy_s(color, strlen(cLP) + 1, cLP);

	this->price = price;
	
}

Laptop::Laptop(const Laptop& obj) : cpu(obj.cpu), ssd(obj.ssd), gpu(obj.gpu), ram(obj.ram)
{
	count++;
	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);

	color = new char[strlen(obj.color) + 1];
	strcpy_s(color, strlen(obj.color) + 1, obj.color);

	price = obj.price;
	cout << "Copy construcor Laptop" << endl;
}

void Laptop::Print()
{
	cout << "Model: " << model << endl;
	cout << "Color: " << color << endl;
	cout << "Price: " << price << endl;
	cpu.Print();
	ssd.Print();
	gpu.Print();
	ram.Print();

	cout << "N? Laptops: " << count << endl;
}

int Laptop::GetCount()
{
	return count;
}

void Laptop::setPrice(double p)
{
	price = p;
}
double Laptop::getPrice()
{
	return price;
}
void Laptop::setModel(const char* m)
{
	if (model != nullptr)
	{
		delete[] model;
	}
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}
char* Laptop::getModel()
{
	return model;
}
void Laptop::setColor(const char* c)
{
	if (color != nullptr)
	{
		delete[] color;
	}

	color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
}
char* Laptop::getColor()
{
	return color;
}

Laptop::~Laptop()
{
	count--;
	delete[] model;
	delete[] color;
}
