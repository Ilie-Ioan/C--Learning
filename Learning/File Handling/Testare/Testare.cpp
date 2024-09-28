// Testare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

class student
{
private:
    char name[30];
    int age;
public:
    void getData()
    {
        cout << "Enter the name of student : ";
        
        cin.getline(name, 30);
        
        cout << "Enter age : ";
        cin >> age;

    }
    void showData()
    {
        cout << "The name of the student is : " << name << endl;
        cout << "The age of the student is : " << age << endl;

    }
};

int main()
{
    student s;
    
    ofstream file;

    //open file in write mode;

    file.open("info.txt", ios::out);
    if (!file)
    {
        cout << "Error in creating the file " << endl;
        return 0;
    }
    cout << "\nFile with the info was created succesfully \n ";
    
    //write into the file;
    
    s.getData();

    /* (char*)&s is used to point at the start of an object and sizeof(s)
    calculates the number of bytes  copied in the file
    */
    
    
    file.write((char*)&s, sizeof(s));// write into the file
    file.close();

    s.showData();
    cout << "\nThe file was saved and closed succesfully. \n";



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
