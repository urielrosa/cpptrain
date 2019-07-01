#include <iostream>
#include <string>
using namespace std;

string LongestWord(string sen) {
	string lstr;
	size_t prevLen = 0;
	size_t tempLen;
	size_t pos = 0;
	size_t prevPos = 0;

	for (pos; pos <= sen.length(); pos++) {
		if (!isalpha(sen[pos]) && !isdigit(sen[pos])) {
			tempLen = pos - prevPos;
			if (tempLen > prevLen) {
				lstr.assign(sen, prevPos, tempLen);
				prevLen = tempLen;
			}
			prevPos = pos + 1;
		}
	}
	return lstr;

}

int main() {

	// keep this function call here
	//cout << LongestWord(gets(stdin));
	string x;
	getline(cin, x);
	cout << LongestWord(x);
	cin.get();

	return 0;
}