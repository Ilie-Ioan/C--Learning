// ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array> // array header


using namespace std;

int main()
{
   //array declaration
	array<int, 5> testArray1;

	//array initialization
	array<int, 5> testArray2 = { 10,20,30 };

	//methods

	cout << " At " << testArray2.at(2) << endl; //out of bound safe;

	cout << "[] " << testArray2[2] << endl; //unsafe

	cout << "front() " << testArray2.front() << endl; // First element

	cout << "back() " << testArray2.back() << endl; //Last element

	testArray1.fill(0); // Fill the array with 0;

	testArray1.swap(testArray2); //swap the array;

	testArray1.empty(); // Empty the array

	cout << "The size is " << testArray2.size()<<endl; // size of the array filled

	cout << "The maxsize is " << testArray2.max_size()<<endl; //the max size of array

	int i;
	int sizeOfArray = testArray1.size();
	for (i = 0; i < testArray1.size(); i++)
	{
		cout << endl << i << " : Enter the number u want ";
		cin >> testArray1[i];
	}
	cout << endl << "The array has the next values :";
	for (i = 0; i < testArray1.size(); i++)
	{
		
		cout << testArray1[i] << " ";
	}


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
