// List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>

using namespace std;

int main()
{
    //Declaration
    list<int> List1;

    //initialization; 100 200 300
    list<int> List2 = { 1,2,3 };

    //methods
    // begin
    list<int>::iterator i = List2.begin();

    //insert
    List2.insert(i, 10);

    //iteration
    for (list<int>::iterator i = List2.begin(); i != List2.end(); i++)
    {
        cout << *i << " "; // printing the list
    }
    cout << endl;
    //push_back => push the value at the end of the list;
    List2.push_back(22);
    for (list<int>::iterator i = List2.begin(); i != List2.end(); i++)
    {
        cout << *i << " "; // printing the list
    }
    cout << endl;
    //push_front => push the value at the begining of the list
    List2.push_front(88);
    for (list<int>::iterator i = List2.begin(); i != List2.end(); i++)
    {
        cout << *i << " "; // printing the list
    }
    cout << endl;
    //pop_back => pop the last element of the list;
    List2.pop_back();
    for (list<int>::iterator i = List2.begin(); i != List2.end(); i++)
    {
        cout << *i << " "; // printing the list
    }
    cout << endl;
    //pop_front => pop the first element of the list;
    List2.pop_front();
    for (list<int>::iterator i = List2.begin(); i != List2.end(); i++)
    {
        cout << *i << " "; // printing the list
    }
    cout << endl;
    //reverse from 1,2,3 will become 3,2,1
    List2.reverse();
    for (list<int>::iterator i = List2.begin(); i != List2.end(); i++)
    {
        cout << *i << " "; // printing the list
    }
    cout << endl;
    //swap

    List2.swap(List1);
    for (list<int>::iterator i = List2.begin(); i != List2.end(); i++)
    {
        cout << *i << " "; // printing the list
    }
    cout << endl;

    //size

    List1.size();
    for (list<int>::iterator i = List1.begin(); i != List1.end(); i++)
    {
        cout << *i << " "; // printing the list
    }
    cout << endl;

    //sort
    
    List1.sort();
    for (list<int>::iterator i = List1.begin(); i != List1.end(); i++)
    {
        cout << *i << " "; // printing the list
    }
    cout << endl;


    //merge

    List1.merge(List2);
    for (list<int>::iterator i = List1.begin(); i != List1.end(); i++)
    {
        cout << *i << " "; // printing the list
    }
    cout << endl;



}
