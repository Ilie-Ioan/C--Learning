#include<iostream>
#include <string>
#include<map>
#include <unordered_map>

using namespace std;

int main()
{
	//Map
	//declaration
	map<int, string>map1;

	//initialization
	map<int, string>map2 = { {101,"Ioan Ilie"},{201,"Teodora Roman"},{301,"Rustiq Nicolas"} };



	//methods;

	//1.iteration and check
	for (map<int, string>::iterator i = map2.begin(); i != map2.end(); i++)
	{
		cout << i->first << " "; //Printing the keys;
		cout << i->second << endl; //Print the value;
	}
	cout << endl;

	//2.1 at
	cout << "Value at : " << map2.at(201)<<endl;

	//2.2 []
	cout << "Value [] : " << map2[201]<<endl;

	//3 change value;
	map2[201] = "Teodora Ilie Roman";

	//4 insert

	map2.insert(pair<int, string>(55, "Hubbs"));
	map2.insert(make_pair(69, "Five"));
	for (map<int, string>::iterator i = map2.begin(); i != map2.end(); i++)
	{
		cout << i->first << " "; //Printing the keys;
		cout << i->second << endl; //Print the value;
	}
	cout << endl;

	//5. erase
	map<int, string>::iterator i = map2.begin();
	map2.erase(i);

	for (map<int, string>::iterator i = map2.begin(); i != map2.end(); i++)
	{
		cout << i->first << " "; //Printing the keys;
		cout << i->second << endl; //Print the value;
	}
	cout << endl;
	
	//MULTIMAP

	//declaration

	multimap<int, string>multimap1;

	//initialization


	multimap<int, string>multimap2{ {101,"Ioan Ilie"},{201,"Teodora Roman"},{201,"Rustiq Nicolas"} };

		//methods;

		//1.iteration and check
		multimap<int, string>::iterator ii = multimap2.begin();
		for (ii; ii != multimap2.end(); ii++)
		{
			cout << ii->first << " "; //Printing the keys;
			cout << ii->second << endl; //Print the value;
		}
		cout << endl;


		//2 change value; u cant
	

		//3 insert
		multimap2.insert(pair<int, string>(55, "Hubbs"));
		multimap2.insert(make_pair(55, "Five"));
		
		for (multimap<int, string>::iterator ii = multimap2.begin(); ii != multimap2.end(); ii++)
		{
			cout << ii->first << " "; //Printing the keys;
			cout << ii->second << endl; //Print the value;
		}
		cout << endl;


		//4 erase
		multimap<int, string>::iterator del = multimap2.begin();
		multimap2.erase(del);
		
		for (multimap<int, string>::iterator ii = multimap2.begin(); ii != multimap2.end(); ii++)
		{
			cout << ii->first << " "; //Printing the keys;
			cout << ii->second << endl; //Print the value;
		}
		cout << endl;

		//5 Count
		cout << " The Count for Key 201 is " << multimap2.count(201) << endl;
		
		//6 Size

		cout << "The number of Elements : " << multimap2.size() << endl;

		//#Unordered map

		//declaration
		unordered_map<int, string>u1;

		//initialization

		unordered_map<int, string>u2 = { {101,"Ioan Ilie"},{57,"Teodora Roman"},{201,"Rustiq Nicolas"},{201,"Nicolas"} };

		//check

		for (unordered_map<int, string>::iterator i = u2.begin(); i != u2.end(); i++)
		{
			cout << i->first<<" ";
			cout << i->second << endl;
		}
		cout << endl;

		//alter
		u2[201] = "Kevin";

		cout << u2.at(201) << endl;

		//insert
		u2.insert(pair<int, string>(103, "Hubbs"));
		u2.insert(make_pair(69, "Five"));
		
		for (unordered_map<int, string>::iterator i = u2.begin(); i != u2.end(); i++)
		{
			cout << i->first << " ";
			cout << i->second << endl;
		}
		cout << endl;

		//erase

		unordered_map<int, string>::iterator del_u = u2.begin();

		u2.erase(del_u);

		for (unordered_map<int, string>::iterator i = u2.begin(); i != u2.end(); i++)
		{
			cout << i->first << " ";
			cout << i->second << endl;
		}
		cout << endl;

		//5 Count
		cout << " The Count for Key 201 is " << u2.count(201) << endl;

		//6 Size

		cout << "The number of Elements : " << u2.size() << endl;




		return 0;
	
}
