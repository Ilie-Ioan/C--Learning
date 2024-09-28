// File Handling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;


int main()
{

    // 1. Output file
    ofstream fout; //create output  file
    
    fout.open("my.txt"); //load file in ram
    
    fout << "Ilie Ioan first file handling code \nNoua linie hehe" << endl; //apend in file the text i want to switch

    fout.close(); // close file

    ofstream fout1; //create output  file

    fout1.open("my1.txt"); //load file in ram

    fout1 << "AcademiaDeInvatat" << endl; //apend in file the text i want to switch

    fout1.close(); // close file

    // 2. Input file 
    ifstream fin; // create input file 
    
    char ch; //store every ch from file

    fin.open("my1.txt"); //load file in ram
    
    fin >> ch; // read the first character of file

    while (!fin.eof()) //we read till the end of file 
    {
        cout << ch; //Print the first character
        
        fin >> ch; // Move to second character
    }

    fin.close();
    // 3. Tellg function 
    fin.open("my1.txt"); //load file in ram
    
    int pos; // variable to store the first index
    
    pos = fin.tellg(); //Determine the position of the first ch
    
    cout << endl << pos << " ";//Print the position of the first ch


    fin >> ch;//Read the second character
    
    pos = fin.tellg();//Determine the position of the second ch

    cout << endl << pos << " "<<endl;//Print the position of the second ch
    
    fin.close();
    // 4. Seekg function

    fin.open("my1.txt");
    
    char A[10];
    
    for (int i = 0; i < 10; i++)
    {
        A[i] = 0;
    }
    
    fin.seekg(4, ios_base::cur);

    fin.read(A, 4);
    
    for (int i = 0; A[i] != 0; i++)
    {
        cout << A[i];
    }
    
    fin.close();
    // 5.Seekp function
    ofstream fout2;
    char B[8] = "Academy";
    
    fout2.open("my2.txt");
    
    fout2.open("my2.txt", ios::in);//ios::app-append,ios::in=input
    
    fout2.seekp(3, ios_base::beg);
    
    fout2.write(B, 8);
    
    fout.close();




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
