// Scott_v1.1
// Commit, sync
// Commit, push
#include <iostream>
#include <string>
using namespace std;

int LongestWord(string str) {
	string lstr;
	size_t len;
	size_t prevLen = 0;
	size_t tempLen;
	size_t pos = 0;
	size_t prevPos = 0;

	len = str.length();

	for (pos; pos <= len; pos++) {
		if (str[pos] == ' ' || pos == len) {
			tempLen = pos - prevPos;
			if (tempLen > prevLen) {
				lstr.assign(str, prevPos, tempLen);
				prevLen = tempLen;
			}
			prevPos = pos + 1;
		}
	}

	cout << lstr << endl;

	return prevLen;

}

int main() {

	// keep this function call here
	//cout << LongestWord(gets(stdin));
	string x;
	getline(cin, x);
	cout << x << endl << "Longest word: " << LongestWord(x) << endl;
	cin.get();

	return 0;
}