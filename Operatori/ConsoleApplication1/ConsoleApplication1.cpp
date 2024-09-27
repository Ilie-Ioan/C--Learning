// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


//class A 
//{
//    private:
//        int weight;
//    public:
//        A(int x = 0)
//        {
//            weight = x;
//        }
//        A operator+(A w2)
//        {
//            A temp;
//            temp.weight = weight + w2.weight;
//            return temp;
//        }
//        void Afisare()
//        {
//            cout << "Weight is " << weight << endl;
//        }
//
//
//};
class Person
{
    private:
        int weight;
    public:
        Person (int x = 0)
        {
            weight = x;
        }
        void Afisare()
        {
          
            cout << "Weight is " << weight << endl;
        }
        void operator++()
        {
            ++weight;
        }
        void operator++(int)
        {
            weight++; 
        }

};
int main()
{
  /*  A person1(63);
    A person2(64);
    A total;
    total = person1 + person2;
    total.Afisare();*/
    Person person1(63);
    ++person1;
    person1.Afisare();
    person1++;
    person1.Afisare();

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
