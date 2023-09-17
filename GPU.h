#pragma once
class GPU
{
private:
	char* nameGPU;
public:
	GPU();
	GPU(const char* nGpu);
	GPU(const GPU& obj);
	void Print();
	~GPU();
	void setName(const char* n);
	char* getName();
};

