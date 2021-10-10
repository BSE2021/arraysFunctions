// arraysFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void maxim(float p[],int n) {
	int i;
	float max = -10000;

	for (i = 0; i < n; i++) {
		if (p[i] > max) {
			max = p[i];
		}
	}
	cout << "\nThe highest price =  " << max << endl;
}

int main()
{
	float price[] = { 3.5, 2.72, 3.3, 1.55 };
	int i;
	int length = sizeof(price) / sizeof(float);
	cout << "\nSize of the array= " << length << endl;
	for (i = 0; i < length; i++) {
		cout << "\nValue " << i << " = " << price[i]<<endl;
		
	}
	maxim(price, length);
	return 0;
}
