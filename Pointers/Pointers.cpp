// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



using namespace std;

const int MAX = 5;

void square(int* ptr) //referinta punct 3
{
	int temp = *ptr;
	temp = temp * temp;
	*ptr = temp;
}
void afisare_array(int* ptr)
{
	for (int i = 0; i < MAX; i++)
	{
		cout << *ptr++<<" ";
	}
}

class Test
{
	private:
		int data;
	public:
		void setData(int set)
		{
			data = set;
		}
		int getValue()
		{
			return data;
		}

};
int main()
{/*
	1.AICI Am aratat diferenta dintre ptr care reprezinta adresa si *ptr  care reprezinta valoarea din adresa
	int number = 30;
	int* ptr = NULL;

	ptr = &number;
	
	cout << "ptr is " << ptr << endl;
	cout << " *ptr is " << *ptr << endl;*/

	//################################################ 
	/*
	2.Aici am aratat cum pot sa vad bazat pe adresa valoare unui array
	int array[] = { 10,20,30,40,50 };
	int* ptr=array;
	for (int i = 0; i < 5; i++)
	{
		cout << *(ptr + i) << endl;
	}
	*/

	/*
	3.Aici am facut o functie care folosind adresa variabilei number si o transmite care functia square ca sa faca patratul
	int number = 10;
	cout << number << endl;
	square(&number);
	cout << number << endl;
	*/
	/*
	4.Aici am facut o functie care foloseste un vector si afiseaza elementele acestuia folosind pointers
	int number[MAX] = { 1,2,3,4,5 };
	afisare_array(number);
	*/
	/*
	5.Bazat pe o clasa am alocat memoria necesara in mod dinamic adica sa aloc cata memorie am nevoie ca sa nu folosesc mai mult decat trebuie
	Test* T1;
	T1 = new Test;
	T1->setData(18);
	cout << T1->getValue();
	*/


	

}
