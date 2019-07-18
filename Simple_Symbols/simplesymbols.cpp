#include <iostream>
#include <string>
using namespace std;

string SimpleSymbols(string sen) {
	string lstr;
	size_t pos = 0;
	
	if (sen[pos] < 3 || isalpha(sen[0])) {
		return "False";
	}

	for (pos; pos <= sen.length() - 2; pos++) {
		if (isalpha(sen[pos + 1]) && ((sen[pos]) != '+' || (sen[pos + 2]) != '+')) {
			return "False";
		}
	}
		return "True";

}

int main() {

	// keep this function call here
	//cout << SimpleSymbols(gets(stdin));
	string x;
	getline(cin, x);
	cout << SimpleSymbols(x);
	cin.get();

	return 0;
}