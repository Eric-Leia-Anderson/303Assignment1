#include "ARRAY.H"
using namespace std;
#include <iostream>
#include <fstream>


int main(int argc, char* argv[]) {
	int urNum;
	Array numbers;
	int num;
	ifstream fileName(argv[1]);
	while (fileName >> num) {
	
		numbers.add(num);
	}
	numbers.print();
	cout << "Give me an integer to check the array with. \n";
	cin >> urNum;
	cout << " I found it at " << numbers.getNumIndex(urNum) << " index\n";

	cout << "Give me an index to use to modify.\n";
	cin >> urNum;
	cout << "Give me an number to modify.\n";
	cin >> num;
	pair <int, int> values = numbers.modifyNum(urNum, num);
	cout << "old value was: " << values.first <<"\n" << "new value is: "  << values.second << "\n";
	numbers.print();

	cout << "Give me an index of a number you want removed.\n";
	cin >> urNum;
	numbers.remove(urNum);
	numbers.print();
}