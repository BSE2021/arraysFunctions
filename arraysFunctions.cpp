// arraysFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void minim(double p[], int n);

void maxim(double p[],int n) {
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
	double price[] = { 3.5, 2.72, 3.3, 1.55 };
	int i;
	int length = sizeof(price) / sizeof(double);
	cout << "\nSize of the array= " << length << endl;
	for (i = 0; i < length; i++) {
		cout << "\nValue " << i << " = " << price[i]<<endl;
		
	}
	maxim(price, length);
	minim(price, length);
	return 0;
}
void minim(double p[], int n) {
	int i;
	float min = 1000;

	for (i = 0; i < n; i++) {
		if (p[i] < min) {
			min = p[i];
		}
	}
	cout << "\nThe lowest price =  " << min << endl;
}