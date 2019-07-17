#include <string>
#include <iostream>
using namespace std;

string LetterChanges(string str) {

	// code goes here   
	for (int i = 0; i < str.length(); i++)
	{
		if ('a' <= str[i] && str[i] < 'z' || 'A' <= str[i] && str[i] < 'Z')
		{
			str[i]++;
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			{
				str[i] += 'A' - 'a';
			}
		}
		else if (str[i] == 'z' || str[i] == 'Z')
		{
			str[i] = 'A';
		}
	}
	return str;

}

int main() {

	// keep this function call here
	//cout << LetterChanges(gets(stdin));
	string x;
	getline(cin, x);
	cout << LetterChanges(x);
	cin.get();
	return 0;


}
