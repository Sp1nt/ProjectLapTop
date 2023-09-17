#pragma once
class RAM
{
private:
	char* nameRAM;
public:
	RAM();
	RAM(const char* nRam);
	RAM(const RAM& obj);
	void Print();
	void setName(const char* n);
	char* getName();
	~RAM();
};

