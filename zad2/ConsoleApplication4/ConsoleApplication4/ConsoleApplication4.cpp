// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	double n;
	int count = 0, x = 0;
	double sum = 0, srar;
	while(x==0)
	{
		cin >> n;
		if (n<=1)
		{
			srar = sum / count;
			cout << "Broq :" << count << endl;
			cout << "Sbora :" << sum << endl;
			cout << "Sredno aritmetichno :" << srar << endl;
		}
		count++;
		sum += n;
	}
    return 0;
}

