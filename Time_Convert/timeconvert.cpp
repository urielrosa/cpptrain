#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string TimeConvert(int num){

	// code goes here
	stringstream tc;
	tc << num / 60 << ':' << num % 60 << endl;
	return tc.str();
}


int main() {

	// keep this function call here
	//cout << TimeConvert(gets(stdin));
	int x;
	cout << "x = "; cin >> x; cout << x << endl;
	cout << TimeConvert(x) << endl;
	cin.get(); cin.get();

	return 0;
}
