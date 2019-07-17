#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string LetterCapitalize(string str) {

	// code goes here   
	std::string data = str;

	// Iterate over all the characters in a string
	// and call a lambda function on each of them
	std::for_each(data.begin(), data.end(), [](char & c) {
		static int last = ' ';
		if (last == ' ' && c != ' ' && ::isalpha(c))
			c = ::toupper(c);
		last = c;
	});

	std::cout << data << std::endl;

	cin.get();
	return str;

}

int main() {

	// keep this function call here
	//cout << LetterCapitalize(gets(stdin));
	string x;
	getline(cin, x);
	cout << LetterCapitalize(x);
	cin.get();

	return 0;
}
