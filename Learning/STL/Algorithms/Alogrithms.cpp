#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int>my_vector = { 40,50,20,10,870 };
	for (vector<int>::iterator i = my_vector.begin(); i != my_vector.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	//1 sort
	sort(my_vector.begin(), my_vector.end());
	cout << "Sorted vector :" << endl;
	for (vector<int>::iterator i = my_vector.begin(); i != my_vector.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	//2 Reverse
	reverse(my_vector.begin(), my_vector.end());
	cout << "Reversed vector :" << endl;
	for (vector<int>::iterator i = my_vector.begin(); i != my_vector.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	//max element

	cout << "Max is : " << *max_element(my_vector.begin(), my_vector.end()) << endl;
	
	//min element

	cout << "Min is " << *min_element(my_vector.begin(), my_vector.end()) << endl;

	//binary_search
	if (binary_search(my_vector.begin(), my_vector.end(), 20))
		cout << "Element founded" << endl;
	else
		cout << "Element not founded" << endl;

	//upper_bond
	vector<int>my_vector2 = { 5,10,20,20,30,30,40,50 };
	vector<int>::iterator i1, i2;
	i1 = upper_bound(my_vector2.begin(), my_vector2.end(), 20);
	i2 = lower_bound(my_vector2.begin(), my_vector2.end(), 20);


	//count
	cout << "20 APEARS " << count(my_vector2.begin(), my_vector2.end(), 20) << " TIMES \n";


	




}