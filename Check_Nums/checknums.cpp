#include <iostream>
#include <string>
using namespace std;

string CheckNums(int num1, int num2) {

	// code goes here
	if (num2 < num1)
	{
		return "false";
	}
	else if (num2 > num1)
	{
		return "true";
	}
	return "-1";
}


int main() {

	// keep this function call here
	//cout << CheckNums(gets(stdin));
	int x;
	int y;
	cout << "x = "; cin >> x; 
	cout << endl << "y = "; cin >> y;
	cout << CheckNums(x, y) << endl;
	cin.get(); cin.get();


	return 0;
}