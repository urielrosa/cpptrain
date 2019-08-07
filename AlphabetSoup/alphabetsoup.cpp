#include<string>
#include <iostream>
using namespace std;

string AlphabetSoup(string str) {

	// code goes here   
	string str2;
	str2.push_back(str[0]);
	for (int i = 1; i < str.length(); i++)
	{
		int j;
		for (j = 0; j < str2.length(); j++)
		{
			if (str2[j] >= str[i])
			{
				str2.insert(j, str.substr(i, 1));
				break;
			}
		}
		if (j == str2.length())
		{
			str2.push_back(str[i]);
		}
	}
	return str2;

}


int main() {

	// keep this function call here
	//cout << AlphabetSoup(gets(stdin));
	string x;
	getline(cin, x);
	cout << AlphabetSoup(x);
	cin.get();

	return 0;
}