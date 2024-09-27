// Constructori.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Constructori
{
    private:
        string Nume;
        int Varsta;
        float inaltime;
    public:
        Constructori() //Aici e fara paramatrii
        {
            Nume = "Ionut";
            Varsta = 22;
            inaltime = 22.5;
       }
        Constructori(string nume_a, int varsta_a, float inaltime_a)
        {
            Nume = nume_a;
            Varsta = varsta_a;
            inaltime = inaltime_a;
        }
        Constructori(Constructori& Constructor2)
        {
            Nume = Constructor2.Nume;
            Varsta = Constructor2.Varsta;
            inaltime = Constructor2.inaltime;
        }
        void afla_informati()
        {
            cout << endl << "Numele este " << Nume << endl;
            cout << endl << "Varsta este " << Varsta << endl;
            cout << endl << "Inaltimea este " << inaltime << endl;

        }


};
class Supraincarcarea
{
private:
    int inaltime;
public:
    Supraincarcarea(int x = 0)
    {
        inaltime = x;

    }
    Supraincarcarea operator+(Supraincarcarea y)
    {
        Supraincarcarea temp;
        temp.inaltime = inaltime + y.inaltime;
        return temp;
    }

    void Afisare_rezultat()
    {
        cout << inaltime;

    }

};

int main()
{
    //Constructori Constructor1,Constructor2("Teodora",29,1.60),Constructor3(Constructor1);
    //Constructor1.afla_informati();
    //Constructor2.afla_informati();
    //Constructor3.afla_informati();
    Supraincarcarea A1(20);
    Supraincarcarea A2(35);
    Supraincarcarea ATOTAL;
    ATOTAL = A1 + A2;
    ATOTAL.Afisare_rezultat();
    

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
