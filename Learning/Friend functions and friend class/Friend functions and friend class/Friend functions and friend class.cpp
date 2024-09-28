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
        friend class Beta;
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
        int Suma()
        {
            Alpha alpha_obj(3);
            int suma = alpha_obj.a1 + b1;
            return suma;
        }
        
};
void Fun()
{
   Alpha a(8);
    Beta b(2);
  int x = a.a1 + b.b1;
 cout << "Sum is " << x << "\n";
}

class Person {
private:
    int weight;
public:
    Person(int w1 = 0)
    {
        weight = w1;
    }
    friend bool operator>(Person p1, Person p2);
    friend bool operator<(Person p1, Person p2);
};
bool operator>(Person p1, Person p2)
{
    return p1.weight > p2.weight;
}
bool operator<(Person p1, Person p2)
{
    return p1.weight < p2.weight;
}

int main()
{
    Fun();
    Beta beta(7);
    cout << "Suma este " << beta.Suma() << endl;


    int w1, w2;
    cout << "Introduceti greutatea primei persoane " << endl;
    cin >> w1;
    cout << "Introduceti greutatea celei de a doua persoane " << endl;
    cin >> w2;
    Person p1(w1);
    Person p2(w2);
    if (p1 > p2)
    {
        cout << "Prima persoana este mai grea. \n";
    }
    else if (p1 < p2)
    {
        cout << " A doua persoana este mai grea. \n";
    }
    else
    {
        cout << "Ambele persoane au  aceeasi greutate \n";
    }

}


