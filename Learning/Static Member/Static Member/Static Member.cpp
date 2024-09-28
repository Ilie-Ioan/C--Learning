// Static Member.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Alpha
{
private:
    int a;
    int b;
public:
    Alpha()
    {
        a = 5;
        b = 5;
        stat++;
    }
    static int stat;
};
int Alpha::stat = 0;
int main()
{
    Alpha a1;
    Alpha a2;
    Alpha a3;
    cout << a1.stat << endl;
    cout << a2.stat << endl;
    cout << Alpha::stat << endl;

    return 0;
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
