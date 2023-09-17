#include <iostream>
#include "LapTop.h" 
#include "CPU.h"     
#include "SSD.h"	
#include "GPU.h"  
#include "RAM.h"

using namespace std;

int Laptop::count = 0;

int main()
{
    char Buff_model[100];
    char Buff_color[100];
    char Buff_CPU[100];
    char Buff_SSD[100];
    char Buff_GPU[100];
    char Buff_Ram[100];

    cout << "Old Laptop: " << endl;
    Laptop LP1("Asus TUF Gaming f15", "Black", 29999.56, "intel core i5 114OOH", "Kingston SSD M.2", "GeForce 2050", "Kingston  DDR4 - 3200, 8 Gb ");
    LP1.Print();

    cout << endl << endl;

    cout << "Input model: ";
    cin.getline(Buff_model, 100);

    cout << "Input color: ";
    cin.getline(Buff_color, 100);

    cout << "Input price: ";
    double Buff_price;
    cin >> Buff_price;

    cin.ignore();

    cout << "Input CPU: ";
    cin.getline(Buff_CPU, 100);

    cout << "Input SSD: ";
    cin.getline(Buff_SSD, 100);

    cout << "Input GPU: ";
    cin.getline(Buff_GPU, 100);

    cout << "Input RAM: ";
    cin.getline(Buff_Ram, 100);

    cout << endl << endl;

    cout << "New Laptop: " << endl;
    Laptop LP2(Buff_model, Buff_color, Buff_price, Buff_CPU, Buff_SSD, Buff_GPU, Buff_Ram);
    LP2.Print();

    cout << endl << endl;

    cout << "Copy old laptop: " << endl;
    Laptop LP3(LP1);

    cout << endl << endl;

    LP3.Print();
}