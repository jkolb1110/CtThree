/*
 * Module3.cpp
 *  Created on: Jun 28, 2024
 * Author: jkolb
 */

#include <iostream>
using namespace std;
int main()
{
	int val1, val2, val3;
	cout <<" Enter three int values: ";
	cin >> val1 >> val2 >> val3;
	
	int* ptr1 = new int(val1);
	int* ptr2 = new int(val2);
	int* ptr3 = new int(val3);
	
	cout << "Contents of vars:\n";
	cout << "val1: " << val1 << endl;
	cout << "val2: "  << val2 << endl;
	cout << "val3: " << val3 << endl;
	
	cout << "Contents of ptrs:\n";
	cout << "ptr1: "  << *ptr1 << endl;
	cout << "ptr2: "  << *ptr2 << endl;
	cout << "ptr3: " << *ptr3 << endl;
	
	delete ptr1;
	delete ptr2;
	delete ptr3;
	return 0;
}
	
	



