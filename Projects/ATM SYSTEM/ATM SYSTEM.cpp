// ATM SYSTEM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

/*
* Verifica balanta
* Scoate bani
* Informatii utilizator
* Updateaza Numar Utilizator
*/
class atm 
{
private:
    long int numarator_utilizator;
    string nume;
    int PIN;
    double Balanta;
    string Numar_Utilizator;
public:
    void setare_date(long int numarator_utilizator_a, string nume_a, int PIN_a, double Balanta_a, string Numar_Utilizator_a)
    {
        numarator_utilizator = numarator_utilizator_a;
        nume = nume_a;
        PIN = PIN_a;
        Balanta = Balanta_a;
        Numar_Utilizator = Numar_Utilizator_a;
    }
    long int Afla_numarul_utilizatorului()
    {
        return numarator_utilizator;
    }
    string Afla_nume()
    {
        return nume;
    }
    int Afla_Pin()
    {
        return PIN;
    }
    double Afla_Balanta()
    {
        return Balanta;
    }
    string Afla_Numar_Utilizator()
    {
        return Numar_Utilizator;
    }
    void Updateaza_Numar_Utilizator(string numar_vechi, string numar_nou)
    {
        if (numar_vechi == Numar_Utilizator)
        {
            Numar_Utilizator = numar_nou;
            cout <<endl<<"Numarul a fost actualizat cu succes" << endl;
            _getch();//Functie care mentine ecranul activ pana cand apesi o tasta;
        }
        else
        {
            cout << endl << "Numar gresit" << endl;
            _getch();

        }

    }
    void Scoate_Bani(int suma)
    {
        if (suma > 0 && suma <= Balanta)
        {
            Balanta -= suma;
            cout << endl << "Ai scos suma de " << suma << " si ai ramas cu Balanta de " << Balanta << endl;
            _getch();
        }
        else
        {
            if (suma == 0)
                cout << endl << "Nu ai bani in balanta" << endl;
            else
                cout << endl << "Suma pe care o doresti sa o scoti este mai mare decat balanta disponibila" << endl;
            _getch();
        }
    }



};

int main()
{
    int alegere = 0;
    int PIN;
    long int Introdu_Numar_Cont;
    system("cls");
    atm Utilizator1;
    Utilizator1.setare_date(958341, "Ioan Ilie", 1875, 2500.96, "0773980904");
    do
    {
        system("cls");
        cout << endl << "Bun venit la ATM" << endl;
        cout << "Introduceti Numarul Utilizatorului : ";
        cin >> Introdu_Numar_Cont;
        cout << "Introduceti PIN-ul ";
        cin >> PIN;
        if ((Introdu_Numar_Cont == Utilizator1.Afla_numarul_utilizatorului()) && (PIN == Utilizator1.Afla_Pin()))
        {
            do
            {
                int Suma = 0;

                int alegere;
                string numar_vechi, numar_nou;
                cout << endl << "Seteaza Optiuni" << endl;
                cout << endl << "1 - Verifica Balanta" << endl;
                cout << endl << "2 - Scoate Bani" << endl;
                cout << endl << "3 - Informatii Utilizator" << endl;
                cout << endl << "4 - Schimba Numar Utilizator" << endl;
                cout << endl << "5 - iesiti din Atm" << endl;
                cin >> alegere;
                switch (alegere)
                {
                    case 1:cout << "Balanta dumneavoastra este de " << Utilizator1.Afla_Balanta() << endl;
                    case 2:
                        cout << endl << "Introduceti suma" << endl;
                        cin >> Suma;
                        Utilizator1.Scoate_Bani(Suma);
                        break;
                    case 3:
                        cout << endl << "Numele dumneavoastra este" << Utilizator1.Afla_nume() << endl;
                        cout << endl << "Pin ul dumneavoastra este " << Utilizator1.Afla_Pin() << endl;
                        cout << endl << "Numarul dumneavoastra este " << Utilizator1.Afla_Numar_Utilizator() << endl;
                    case 4:
                        cout << endl << "Introduceti numarul  vechi:";
                        cin >> numar_vechi;
                        cout << endl << "Introduceti numarul nou: ";
                        cin >> numar_nou;
                        Utilizator1.Updateaza_Numar_Utilizator(numar_vechi, numar_nou);
                    case 5:
                        exit(0);
                    default:
                        cout << "Introduceti date valide";



                }

            } while (1);
        }


    } while (1);

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
