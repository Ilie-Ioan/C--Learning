// Vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //declaration:
    vector<int>TestVector1;

    cout << "Size:" << TestVector1.size() << endl; // size function

    //initialization:

    vector<int>TestVector2 = { 10,20,30 };

    //methods

    cout << " At " << TestVector2.at(1) << endl;//out of bound safe

    cout << " [] " << TestVector2[1] << endl;//unsafe

    TestVector2.push_back(40); // inserting an element at the end of the vector
    TestVector2.push_back(50);
    TestVector2.push_back(60);

    //iterator is pointer to container
    for (vector<int>::iterator i = TestVector2.begin(); i != TestVector2.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    

    //insert the element in vector before the position pointed
    vector<int>::iterator i = TestVector2.begin();
    TestVector2.insert(i, 0);

    //remove the last element
    TestVector2.pop_back();

    //erase; remove the element pointed by i
    vector<int>::iterator j = TestVector2.begin();
    TestVector2.erase(j);

    //erase all element except last
    TestVector2.erase(TestVector2.begin(), TestVector2.end() -1);

    //swap 
    TestVector2.swap(TestVector1);

    //Capacity;

    cout << "\n Capacity " << TestVector2.capacity() << endl;

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
