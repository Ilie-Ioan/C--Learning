    // Mostenirea cu constructori#.cpp : This file contains the 'main' function. Program execution begins and ends there.
    //

    #include <iostream>

    using namespace std;


    class base
    {
        public:
            base()
            {
                cout << "Default or base Class" << endl;

            }
            base(int b)
            {
                cout << "Parameter class of Base Class" << b << endl;
            }
            void Msg()
            {
                cout << "Its the base class" << endl;
            }
    };
    class derived :public base
    {
        public:
            derived():base()
            {
                cout << "Default of derived class" << endl;
            }
            derived(int d):base(d)
            {
                cout << "Parameter class of Derived Class " << d << endl;
            }
            void Msg()
            {
                cout << "Its the derived class" << endl;
                base::Msg();
            }
    };


    int main()
    {
        derived d1;
        d1.Msg();
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
