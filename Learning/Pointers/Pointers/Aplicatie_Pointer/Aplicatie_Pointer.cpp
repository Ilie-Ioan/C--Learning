// Aplicatie_Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>



using namespace std;

class Car
{
	private:
		int weight;
	public:
		void setWeight(int w)
		{
			weight = w;
		}
		int getWeight()
		{
			return weight;
		}

};
class BMW
{
	private:
		int topSpeed;
		Car* ptr;
	public:
		BMW(int wght = 0, int tps = 0)
		{
			ptr = new Car;
			ptr->setWeight(wght);
			topSpeed = tps;

		 }
		int getWeight()
		{
			return ptr->getWeight();
		}
		int getTopsPEED()
		{
			return topSpeed;
		}
		~BMW()
		{
			delete ptr;
		}


};

class Person
{
	private:
		int age;
		string name;
	public:
		Person(int age, string name)
		{
			this->age = age;
			this->name = name;
		}
		void Afisare()
		{
			cout << "The age is " << age << "\n";
			cout << "The name is " << name << "\n";

		}
};

int main()
{
	/*
	Asta e prima problema unde  am folosit elemente cum ar fi
	BMW b(3000, 350);
	cout << "The weight and topspeed are : " << b.getWeight() << " and " << b.getTopsPEED() << endl;*/


	/*Aici am folosit this care este un pointer care face referinta la obiectul folosit (p1 respectiv p2)
	Person p1(22, "Ioan");
	Person p2(29, "Teodora");
	p1.Afisare();
	p2.Afisare();*/
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
