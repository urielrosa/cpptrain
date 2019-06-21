#include <iostream>
#include <string>
using namespace std;

int LongestWord(string str) {
	int count = 0;
	unsigned int len = str.length();
	int count_prev = 0;
	cout << "len = " << len - 1 << endl;
	string y = "";
	while (len) {
		cout << "str[len-1]:" << str[len - 1] << endl;
		if (str[len - 1] != ' ') {
			count++;

		}
		else {
			if (count_prev < count) {
				count_prev = count;

			}
			for (int i = 0; i < count; i++)
			{
				y = str[len - 1];
				cout << "y = " << y << endl;
			}
			count = 0;
		}

		len--;
	}

	return count_prev;
}

int main() {

	// keep this function call here
	//cout << LongestWord(gets(stdin));
	string x;
	getline(cin, x);
	cout << x << endl << "Longest word: " << LongestWord(' ' + x) << endl;
	cin.get();

	return 0;
}