#include <iostream>
#include <string>
using namespace std;

string CheckNums(int num1, int num2) {

	// code goes here   
	return num1 < num2 ? "true" : (num1 == num2 ? "-1" : "false");

}

int main() {

	// keep this function call here
	//cout << CheckNums(gets(stdin));

	int x; int y;
	cout << "x = "; cin >> x;
	cout << endl << "y = "; cin >> y;
	cout << CheckNums(x, y) << endl;
	cin.get(); cin.get();


	return 0;
}