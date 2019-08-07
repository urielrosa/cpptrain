#include <iostream>
#include <string>
using namespace std;

string AlphabetSoup(string str) {
	string lstr;
	lstr.push_back(str[0]);
	for (int i = 1; i < str.length(); i++)
	{
		int j;
			for (j=0;j<lstr.length();j++)
		{
			if(lstr[j]>=str[i])
			{
				lstr.insert(j,str.substr(i,1));
			break;
			}
		}
	if(j==lstr.length())
	{
		lstr.push_back(str[i]);
	}
	}
	return lstr;
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