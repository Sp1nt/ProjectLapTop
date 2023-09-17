#pragma once
class CPU
{
private:
	char* nameCPU;
public:
	CPU();
	CPU(const char* nCpu);
	CPU(const CPU& obj);
	void Print();
	void setName(const char* nCpu);
	char* getName();
	~CPU();
};
