#pragma once
class SSD
{
private:
	char* nameSSD;
public:
	SSD();
	SSD(const char* nSsd);
	SSD(const SSD& obj);
	void Print();
	void setName(const char* n);
	char* getName();
	~SSD();
};

