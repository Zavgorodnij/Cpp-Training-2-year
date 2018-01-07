#include"stdafx.h"
#include<Windows.h>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	const int n = 10;
	float a[n];
	for (int i = 0; i<n; i++)
		cin >> a[i];
	float min = a[0], nomer = 0, sum = 0;
	for (int i = 0; i<n; i++)
		if (a[i] < min)
		{
			min = a[i];
			nomer = i;
		}
	for (int i = 0; i<nomer; i++)
		sum += a[i];
	cout << sum;
	system("pause");
	return 0;
}
