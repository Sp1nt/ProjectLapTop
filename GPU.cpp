#include <iostream>
#include "GPU.h"
using namespace std;

GPU::GPU()
{
	nameGPU = nullptr;
}

GPU::GPU(const char* nGpu)
{
	nameGPU = new char[strlen(nGpu) + 1];
	strcpy_s(nameGPU, strlen(nGpu) + 1, nGpu);
}

GPU::GPU(const GPU& obj)
{
	nameGPU = new char[strlen(obj.nameGPU) + 1];
	strcpy_s(nameGPU, strlen(obj.nameGPU) + 1, obj.nameGPU);
	cout << "Copy constructor GPU" << endl;
}

void GPU::Print()
{
	cout << "GPU: " << nameGPU << endl;
}

void GPU::setName(const char* nGpu)
{
	if (nameGPU != nullptr)
	{
		delete[] nameGPU;
	}
	nameGPU = new char[strlen(nGpu) + 1];
	strcpy_s(nameGPU, strlen(nGpu) + 1, nGpu);
}

char* GPU::getName()
{
	return nameGPU;
}


GPU::~GPU()
{
	delete[] nameGPU;
}