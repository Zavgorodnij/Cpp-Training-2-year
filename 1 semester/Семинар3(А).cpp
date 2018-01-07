#include"stdafx.h"
#include<Windows.h>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	//A задание
	setlocale(0,"");
	const int n = 10;
	float  Array[n];
	cout << "Введите массив" << endl;
		for (int i = 0; i <n; i++)
		{
			cin >> Array[i];
		}
		int proiz = 1;
		for (int i = 0; i<n; i++)
			if (Array[i]>0)
			{
				proiz *= Array[i];
			}
		cout << "Ответ" << proiz << endl;
		system("pause");
		return 0;

}

