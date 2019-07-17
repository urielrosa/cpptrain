#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


string ChangeLetter(string str) {
	const char *lut =
		"                                 !\"#$%&'()*+,-./0123456789:;<=>?@"
		"BCDEFGHIJKLMNOPQRSTUVWXYZA"
		"[\\]^_ "
		"bcdEfghIjklmnOpqrstUvwxyzA"
		"{|}~ ";
	size_t idx;

	for (idx = 0; idx < str.length(); idx++) {
		str[idx] = lut[str[idx]];
	}
	
	return str;
}



int main() {

	// keep this function call here
	// cout << LongestWord(gets(stdin));
	string x;
	getline(cin, x);
	cout << ChangeLetter(x);
	cin.get();

	return 0;
}
