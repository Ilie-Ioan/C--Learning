#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;


int main()
{
	cout << "Set" << endl;
	// I. SET
	//declaration
	set<int> set1 = { 10,40,10,20,50,90};
	
	//check and iteration
	for (set<int>::iterator i = set1.begin(); i != set1.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	//insert
	set1.insert(66);
	set1.insert(66);
	set1.insert(69);
	//check and iteration
	for (set<int>::iterator i = set1.begin(); i != set1.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl<<endl;
	
	// II.MULTISET
	cout << "Multiset" << endl;

	//declaration
	multiset<int>set2;

	//init
	multiset<int>set3 = { 1,3,2,1,4,5,6,7,1,2 };
	

	//check and iteration
	for (multiset<int>::iterator i = set3.begin(); i != set3.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	//insert

	set3.insert(9);

	for (multiset<int>::iterator i = set3.begin(); i != set3.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	//erase
	//iterator
	multiset<int>::iterator del = set3.begin();
	set3.erase(del);

	//value
	set3.erase(2);

	//delete in range: from staert to first aparation of 5
	set3.erase(set3.begin(), set3.find(5));

	cout << endl << endl;

	for (multiset<int>::iterator i = set3.begin(); i != set3.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	//swap
	set2.swap(set3);

	for (multiset<int>::iterator i = set2.begin(); i != set2.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	//size
	cout << "Size of set2 is : " << set2.size()<<endl;
	cout << "Size of set3 is : " << set3.size()<<endl;
	cout << endl << endl;


	/// III. Unordered Set
	cout << "Unordered Set " << endl;

	//declaration
	unordered_set<int>u_set1;

	//initialization

	unordered_set<int>u_set2 = { 10,40,22,333,8,10 };

	//check

	for(unordered_set<int>::iterator i = u_set2.begin();i !=u_set2.end();i++)
	{
		cout << *i << " ";
	}

	//insert
	u_set2.insert(9);

	//erase
	//iterator
	unordered_set<int>::iterator udel = u_set2.begin();
	u_set2.erase(udel);

	//value
	u_set2.erase(8);

	//delete in range: from staert to first aparation of 5
	u_set2.erase(u_set2.begin(), u_set2.find(22));

	cout << endl;

	for (unordered_set<int>::iterator i = u_set2.begin(); i != u_set2.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	
	//swap

	u_set1.swap(u_set2);

	for (unordered_set<int>::iterator i = u_set2.begin(); i != u_set2.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	//size
	cout << "Size of set2 is : " << u_set1.size() << endl;
	cout << "Size of set2 is : " << u_set2.size() << endl;





}