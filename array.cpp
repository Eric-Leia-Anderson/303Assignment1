
#include "ARRAY.H"
#include <iostream>
using namespace std;

/*This for loop will move through the array and the if nested in the for loop will
	be looking for the given number. If the number is found it will return the first index
	that it was located at. Returns -1 if it does not find the number.*/
int Array::getNumIndex(int peram) {
	
	for (int i = 0; i < num; i++) {
		if (array[i] == peram) {
			return i;
		}
	}
	return -1;

}

/*using the include of utility it gives me access to pair which allows us to return two values 
in one object. My 260 teacher at jccc found this useful in a few projects. Once we have the values 
from the index and our new value we can replace them.*/
pair<int, int> Array::modifyNum(int index, int newVal) {
	pair<int, int> values;
	values = make_pair(array[index], newVal);
	array[index] = newVal;
	return values;
}

/*if the array is full it will double in size by creating a new array. it will copy all 
the old data to the new array then add the new unit to it. It increases count or how many 
elements are in the array. We also use delete to get rid of the pointer so we avoid
a dangling pointer.*/
void Array::add(int newUnit) {
	
	if (count == num) {
		num = num * 2;
		int *newArray = new int [num];
		newArray = new int[num];
		for (int i = 0; i < count; i++) {
			newArray[i] = array[i];
		}
		delete [] array;
		array = newArray;
	}
	array[count] = newUnit;
	count++;
}

/* This function will locate the given postition and shift the array left by one each 
therfore removing the number at the postition. And we will decrese size by one using count.*/
void Array::remove(int pos) {
	for (int i = 0; i < num; i++) {
	
		if (i == pos) {
		
			for (int j = i; j < num; j++) {
			
				array[j] = array[j + 1];
			}
		}
	}
	count--;
}
/*initializes num and count wasn't sure if I needed a constructor or not figured better to have one.*/
Array::Array() {
	 num = 10;
	 count = 0;
}
/*loops through array and prints out each element.*/
void Array::print() {

	for (int i = 0; i < count; i++) {
	
		cout << array[i] << " ";
	}
	cout << "\n";
}
/*deletes array so there are no dangling pointers.*/
Array::~Array() {
	delete[] array;
}
