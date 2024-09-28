// Friend functions and friend class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Alpha
{
    private:
        int a1;
    public:
        Alpha(int arg = 0)
        {
            a1 = arg;
        }
        friend void Fun();
};
class Beta
{
    private:
        int b1;
    public:
        Beta(int arg = 0)
        {
            b1 = arg;
        }
        friend void Fun();
};
void Fun()
{
    Alpha a(8);
    Beta b(2);
    int x = a.a1 + b.b1;
    cout << "Sum is " << x << "\n";
}
int main()
{
    Fun();
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
