//Eric Anderson cs 303
#ifndef ARRAY_H
#define ARRAY_H
#include <utility>
using namespace std;

class Array {
public:
	int num;
	int count;
	int getNumIndex(int peram);
	pair<int, int> modifyNum(int index, int newVal);
	void add(int newUnit);
	void remove(int pos);
	Array();
	~Array();
	void print();

private:
	int *array = new int [10];
	
};





#endif

