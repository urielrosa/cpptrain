#include <iostream>
#include <string>
using namespace std;

string SimpleSymbols(string str) {

	// code goes here   

	size_t pos = 1;

	if (str[pos] < 3 || isalpha(str[0])) {
		return "false";
	}

	for (pos; pos < str.length() - 1; pos++) {
		if (isalpha(str[pos]) && (str[pos - 1] != '+' || str[pos + 1] != '+')) {

			return "false";
		}
	}
	return "true";

}

int main() {

	// keep this function call here
	//cout << SimpleSymbols(gets(stdin));
	string x;
	getline(cin, x);
	cout << SimpleSymbols(x);
	cin.get();

	return 0;
	
	
	return 0;

}