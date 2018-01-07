#include"stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main()
{

	ifstream fileStream("text.txt");
	string str, res;
	int i, max, j;
	max = i = j = 0;
	while (!fileStream.eof())
	{
		getline(fileStream, str);
		j = 0;
		for (i = 0; i<str.length(); ++i)
		{
			if (ispunct(str[i]))
				++j;
			if (j>max)
			{
				max = j;
				res = str;
			}
		}
	}
	cout << res << endl;
}
