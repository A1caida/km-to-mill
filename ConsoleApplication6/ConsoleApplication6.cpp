// ConsoleApplication6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "cstdlib"

using namespace std;

double getKm() 
{
	double km;
	cout << "Напишите кол-во километров: ";
	cin >> km;
	return km;
}

double KmToMill(double km) 
{
	double const mill = 1.60934;

	return km * mill;
}

int main()
{
	while (true) 
	{
		system("chcp 1251 > nul");
		double millrast = getKm();
		cout << KmToMill(millrast) << endl;
		system("pause");
	}
    return 0;
}

