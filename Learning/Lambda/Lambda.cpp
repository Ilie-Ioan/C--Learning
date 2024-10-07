#include <iostream>
#include <string>

using namespace std;

//1.lambda by value
//2.lambda by reg

int main()
{
	//1 lambda by value
	string msg = "ByteBoard - ";
	string msg2 = "Temp test";
	//[a,&b] : capture a by value and b by reference
	// [] arg -> return_type{definition}
	auto sum = [=](string a, string b) -> string { return msg + a + " " + b + " " + msg2; };

	//[=] : will save all the variables needed;
	//       in the body  of the lambda value;

	cout << sum("Ilie", "Ioan") << endl;


	//2. lambda by function

	int arr[5] = { 1,2,3,4,5 };
	auto sum1 = [&arr]()->int
		{
			int total=0;
			for (int i = 0; i < 5; i++)
				total += i;
			return total;
		};
	cout << "Suma este " << sum1() << endl;

	return 0;


}